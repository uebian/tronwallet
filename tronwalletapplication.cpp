// Copyright (c) 2011-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "tronwalletapplication.h"

#include <qt/mainwindow.h>
#include <qt/guiconstants.h>
#include <qt/guiutil.h>
#include <qt/optionsmodel.h>

#include <boost/signals2/connection.hpp>
#include <memory>

#include <QApplication>
#include <QDebug>
#include <QLatin1String>
#include <QLibraryInfo>
#include <QLocale>
#include <QMessageBox>
#include <QSettings>
#include <QThread>
#include <QTimer>
#include <QTranslator>
#include <QWindow>
#include <QDir>

#include "tron/tronclient.h"
#include "qt/optionsmodel.h"
#include "utils.h"
#include "tron/myaccount.h"
#include "tron/accountinfo.h"
#include "tron/transfercontracttransaction.h"

static QString GetLangTerritory()
{
    QSettings settings;
    qDebug()<<__func__<<"Setting stores in "<<settings.fileName();
    // Get desired locale (e.g. "de_DE")
    // 1) System default language
    QString lang_territory = QLocale::system().name();
    // 2) Language from QSettings
    QString lang_territory_qsettings = settings.value("language", "").toString();
    if(!lang_territory_qsettings.isEmpty())
        lang_territory = lang_territory_qsettings;
    // 3) -lang command line argument
    return lang_territory;
}

/** Set up translations */
static void initTranslations(QTranslator &qtTranslatorBase, QTranslator &qtTranslator, QTranslator &translatorBase, QTranslator &translator)
{
    // Remove old translators
    QApplication::removeTranslator(&qtTranslatorBase);
    QApplication::removeTranslator(&qtTranslator);
    QApplication::removeTranslator(&translatorBase);
    QApplication::removeTranslator(&translator);

    // Get desired locale (e.g. "de_DE")
    // 1) System default language
    QString lang_territory = GetLangTerritory();

    // Convert to "de" only by truncating "_DE"
    QString lang = lang_territory;
    lang.truncate(lang_territory.lastIndexOf('_'));

    // Load language files for configured locale:
    // - First load the translator for the base language, without territory
    // - Then load the more specific locale translator

    // Load e.g. qt_de.qm
    if (qtTranslatorBase.load("qt_" + lang, QLibraryInfo::location(QLibraryInfo::TranslationsPath)))
        QApplication::installTranslator(&qtTranslatorBase);

    // Load e.g. qt_de_DE.qm
    if (qtTranslator.load("qt_" + lang_territory, QLibraryInfo::location(QLibraryInfo::TranslationsPath)))
        QApplication::installTranslator(&qtTranslator);

    // Load e.g. bitcoin_de.qm (shortcut "de" needs to be defined in bitcoin.qrc)
    if (translatorBase.load(lang, ":/translations/"))
        QApplication::installTranslator(&translatorBase);

    // Load e.g. tronwallet_zh_CN.qm (shortcut "zh_CN" needs to be defined in locale.qrc)
    if (translator.load(lang_territory, ":/translations/"))
        QApplication::installTranslator(&translator);
}

static int qt_argc = 1;
static const char* qt_argv = "tronwallet";

TronWalletApplication::TronWalletApplication():
    QApplication(qt_argc, const_cast<char **>(&qt_argv)),
    optionsModel(nullptr),
    window(nullptr),
    returnValue(0)
{
    // Qt runs setlocale(LC_ALL, "") on initialization.
    setQuitOnLastWindowClosed(false);
}

TronWalletApplication::~TronWalletApplication()
{

    delete window;
    window = nullptr;
}

void TronWalletApplication::createOptionsModel(bool resetSettings)
{
    optionsModel = new OptionsModel(this, resetSettings);
}

void TronWalletApplication::createWindow()
{
    window = new MainWindow(nullptr);
    window->setOptionsModel(optionsModel);
    connect(window, &MainWindow::quitRequested, this, &TronWalletApplication::requestShutdown);
    window->show();
}


WId TronWalletApplication::getMainWinId() const
{
    if (!window)
        return 0;

    return window->winId();
}

void TronWalletApplication::initClient()
{
    QSettings settings;
    QString defaultTarget=(QString)DEFAULT_GUI_FULLNODE_HOST+":"+QString("%1").arg(DEFAULT_GUI_FULLNODE_PORT);
    this->tronClient=new TronClient(settings.value("addrFullNode",defaultTarget).toString().toStdString());
}

TronClient* TronWalletApplication::getTronClient(){
    return this->tronClient;
}

void initTypes()
{
    qRegisterMetaType<AccountInfo>("AccountInfo");
    qRegisterMetaType<Result>("Result");
    qRegisterMetaType<Account*>("Account*");
    //qRegisterMetaType<Asset*>("Asset*");
    qRegisterMetaType<std::map<const Asset*,unsigned long long>>("std::map<const Asset*,unsigned long long>");
}

int GuiMain(int argc, char* argv[])
{
    QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    TronWalletApplication app;

    /// 1. Init custom type
    initTypes();

    /// 2. Application identification
    // must be set before OptionsModel is initialized or translations are loaded,
    // as it is used to locate QSettings
    QApplication::setOrganizationName(QAPP_ORG_NAME);
    QApplication::setOrganizationDomain(QAPP_ORG_DOMAIN);
    QApplication::setApplicationName(QAPP_APP_NAME_DEFAULT);

    /// 3. Initialization of translations, so that intro dialog is in user's language
    // Now that QSettings are accessible, initialize translations
    QTranslator qtTranslatorBase, qtTranslator, translatorBase, translator;
    initTranslations(qtTranslatorBase, qtTranslator, translatorBase, translator);

    /// 4. Initialization of gRPC Client
    app.initClient();

    /// 5. Main GUI initialization
    // Load GUI settings from QSettings
    app.createOptionsModel(false);

    app.createWindow();
    qInfo() << __func__ << ": Application started.";

    return app.exec();
}

void TronWalletApplication::requestShutdown()
{
    qDebug() << __func__ << ": Requesting shutdown";
    quit();
}
