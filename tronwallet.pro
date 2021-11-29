QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    qt/bitcoinaddressentryvalidator.cpp \
    qt/guiutil.cpp \
    qt/optionsmodel.cpp \
    qt/qvalidatedlineedit.cpp \
    qt/mainwindow.cpp \
    qt/optionsdialog.cpp \
    qt/qvaluecombobox.cpp \
    tronwalletapplication.cpp

HEADERS += \
    qt/bitcoinaddressentryvalidator.h \
    qt/guiconstants.h \
    qt/guiutil.h \
    qt/optionsmodel.h \
    qt/qvalidatedlineedit.h \
    qt/mainwindow.h \
    qt/optionsdialog.h \
    qt/qvaluecombobox.h \
    tronwalletapplication.h

FORMS += \
    qt/forms/mainwindow.ui \
    qt/optionsdialog.ui

TRANSLATIONS += \
    translations/tronwallet_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
