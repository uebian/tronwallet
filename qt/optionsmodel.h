// Copyright (c) 2011-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_OPTIONSMODEL_H
#define BITCOIN_QT_OPTIONSMODEL_H

#include <cstdint>
#include <qt/guiconstants.h>

#include <QAbstractListModel>
#include <QSettings>

#include <assert.h>

struct ProxySetting {
    bool is_set;
    QString ip;
    QString port;
};

struct FullNodeSetting {
    QString ip;
    QString port;
};

static constexpr uint16_t DEFAULT_GUI_PROXY_PORT = 9050;
static const char *DEFAULT_GUI_PROXY_HOST = "127.0.0.1";

static constexpr uint16_t DEFAULT_GUI_FULLNODE_PORT = 50051;
static const char *DEFAULT_GUI_FULLNODE_HOST = "grpc.shasta.trongrid.io";

/**
 * Convert configured prune target MiB to displayed GB. Round up to avoid underestimating max disk usage.
 */
static inline int PruneMiBtoGB(int64_t mib) { return (mib * 1024 * 1024 + GB_BYTES - 1) / GB_BYTES; }

/**
 * Convert displayed prune target GB to configured MiB. Round down so roundtrip GB -> MiB -> GB conversion is stable.
 */
static inline int64_t PruneGBtoMiB(int gb) { return gb * GB_BYTES / 1024 / 1024; }

/** Interface from Qt to configuration data structure for Bitcoin client.
   To Qt, the options are presented as a list with the different options
   laid out vertically.
   This can be changed to a tree once the settings become sufficiently
   complex.
 */
class OptionsModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit OptionsModel(QObject *parent = nullptr, bool resetSettings = false);

    enum OptionID {
        ShowTrayIcon,           // bool
        MinimizeToTray,         // bool
        MinimizeOnClose,        // bool
        ProxyUse,               // bool
        ProxyIP,                // QString
        ProxyPort,              // int
        FullNodeIP,             // QString
        FullNodePort,           // int
        DisplayUnit,            // BitcoinUnits::Unit
        ThirdPartyTxUrls,       // QString
        Language,               // QString
        UseEmbeddedMonospacedFont, // bool
        CoinControlFeatures,    // bool
        SubFeeFromAmount,       // bool
        ThreadsScriptVerif,     // int
        Prune,                  // bool
        PruneSize,              // int
        DatabaseCache,          // int
        ExternalSignerPath,     // QString
        SpendZeroConfChange,    // bool
        Listen,                 // bool
        Server,                 // bool
        OptionIDRowCount,
    };

    void Init(bool resetSettings = false);
    void Reset();

    int rowCount(const QModelIndex & parent = QModelIndex()) const override;
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const override;
    bool setData(const QModelIndex & index, const QVariant & value, int role = Qt::EditRole) override;
    /** Updates current unit in memory, settings and emits displayUnitChanged(newUnit) signal */
    void setDisplayUnit(const QVariant &value);

    /* Explicit getters */
    bool getShowTrayIcon() const { return m_show_tray_icon; }
    bool getMinimizeToTray() const { return fMinimizeToTray; }
    bool getMinimizeOnClose() const { return fMinimizeOnClose; }
    int getDisplayUnit() const { return nDisplayUnit; }
    QString getThirdPartyTxUrls() const { return strThirdPartyTxUrls; }
    bool getUseEmbeddedMonospacedFont() const { return m_use_embedded_monospaced_font; }
    bool getCoinControlFeatures() const { return fCoinControlFeatures; }
    bool getSubFeeFromAmount() const { return m_sub_fee_from_amount; }
    const QString& getOverriddenByCommandLine() { return strOverriddenByCommandLine; }

    /* Restart flag helper */
    void setRestartRequired(bool fRequired);
    bool isRestartRequired() const;


private:
    /* Qt-only settings */
    bool m_show_tray_icon;
    bool fMinimizeToTray;
    bool fMinimizeOnClose;
    QString language;
    int nDisplayUnit;
    QString strThirdPartyTxUrls;
    bool m_use_embedded_monospaced_font;
    bool fCoinControlFeatures;
    bool m_sub_fee_from_amount;
    /* settings that were overridden by command-line */
    QString strOverriddenByCommandLine;

Q_SIGNALS:
    void displayUnitChanged(int unit);
    void coinControlFeaturesChanged(bool);
    void showTrayIconChanged(bool);
    void useEmbeddedMonospacedFontChanged(bool);
};

#endif // BITCOIN_QT_OPTIONSMODEL_H
