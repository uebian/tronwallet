// Copyright (c) 2011-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_GUIUTIL_H
#define BITCOIN_QT_GUIUTIL_H

#include <QApplication>
#include <QEvent>
#include <QHeaderView>
#include <QItemDelegate>
#include <QLabel>
#include <QMessageBox>
#include <QMetaObject>
#include <QObject>
#include <QProgressBar>
#include <QString>
#include <QTableView>

#include <cassert>
#include <chrono>
#include <utility>

#include <boost/filesystem.hpp>

class PlatformStyle;
class QValidatedLineEdit;
class SendCoinsRecipient;

namespace interfaces
{
    class Node;
}

QT_BEGIN_NAMESPACE
class QAbstractButton;
class QAbstractItemView;
class QAction;
class QDateTime;
class QDialog;
class QFont;
class QKeySequence;
class QLineEdit;
class QMenu;
class QPoint;
class QProgressDialog;
class QUrl;
class QWidget;
QT_END_NAMESPACE

/** Utility functions used by the Bitcoin Qt UI.
 */
namespace GUIUtil
{
    // Use this flags to prevent a "What's This" button in the title bar of the dialog on Windows.
    constexpr auto dialog_flags = Qt::WindowTitleHint | Qt::WindowSystemMenuHint | Qt::WindowCloseButtonHint;

    /**
     *  Convert OS specific boost path to QString through UTF-8
     */
    QString boostPathToQString(const boost::filesystem::path &path);

    /**
     * Shows a QDialog instance asynchronously, and deletes it on close.
     */
    void ShowModalDialogAndDeleteOnClose(QDialog* dialog);

    template <typename SeparatorType>
        QStringList SplitSkipEmptyParts(const QString& string, const SeparatorType& separator)
        {
        #if (QT_VERSION >= QT_VERSION_CHECK(5, 14, 0))
            return string.split(separator, Qt::SkipEmptyParts);
        #else
            return string.split(separator, QString::SkipEmptyParts);
        #endif
        }

} // namespace GUIUtil

#endif // BITCOIN_QT_GUIUTIL_H
