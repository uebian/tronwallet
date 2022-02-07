#ifndef TRONWALLETAPPLICATION_H
#define TRONWALLETAPPLICATION_H

#include <assert.h>
#include <memory>
#include <optional>

#include <QApplication>
#include "tron/myaccount.h"

class MainWindow;
class OptionsModel;
namespace interfaces {
class Init;
} // namespace interfaces


/** Main Bitcoin application object */
class TronWalletApplication: public QApplication
{
    Q_OBJECT
public:
    explicit TronWalletApplication();
    ~TronWalletApplication();

    /// parameter interaction/setup based on rules
    void parameterSetup();

    /// Create main window
    void createWindow();

    /// Create options model
    void createOptionsModel(bool resetSettings);
    /// Basic initialization, before starting initialization/shutdown thread. Return true on success.
    bool baseInitialize();

    /// Request core initialization
    void requestInitialize();

    /// Get process return value
    int getReturnValue() const { return returnValue; }

    /// Get window identifier of QMainWindow (BitcoinGUI)
    WId getMainWinId() const;

    /// Setup platform style
    void setupPlatformStyle();

public Q_SLOTS:
    /// Request core shutdown
    void requestShutdown();

Q_SIGNALS:
    void requestedInitialize();
    void requestedShutdown();
    void splashFinished();
    void windowShown(MainWindow* window);

private:
    OptionsModel *optionsModel;
    MainWindow *window;
    QTimer *pollShutdownTimer;
    int returnValue;
    MyAccount* account;
};

int GuiMain(int argc, char* argv[]);

#endif // BITCOIN_QT_BITCOIN_H
