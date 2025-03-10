QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

INCLUDEPATH += tron/proto/

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    crypto/base58.cpp \
    crypto/keccak.cpp \
    crypto/secp256k1wrapper.cpp \
    crypto/sha256.cpp \
    crypto/sha3.cpp \
    crypto/sm3.cpp \
    main.cpp \
    qt/addcurrencydialog.cpp \
    qt/guiutil.cpp \
    qt/optionsmodel.cpp \
    qt/qvalidatedlineedit.cpp \
    qt/mainwindow.cpp \
    qt/optionsdialog.cpp \
    qt/qvaluecombobox.cpp \
    qt/tronaddressvalidator.cpp \
    qt/worker/accountinfoworker.cpp \
    qt/worker/assetinfoworker.cpp \
    qt/worker/addcurrencyworker.cpp \
    qt/worker/transactionbroadcastworker.cpp \
    tron/account.cpp \
    tron/scvalue/scvalueaccount.cpp \
    tron/scvalue/scvalueuint256.cpp \
    tron/smartcontractcallbuilder.cpp \
    tron/smartcontracttype.cpp \
    tron/scvalue/smartcontractvalue.cpp \
    tron/asset.cpp \
    tron/transfertrc20transaction.cpp \
    tron/trc10asset.cpp \
    tron/trc20asset.cpp \
    tron/block.cpp \
    tron/myaccount.cpp \
    tron/transaction.cpp \
    tron/triggersmartcontracttransaction.cpp \
    tron/transfercontracttransaction.cpp \
    tron/tronclient.cpp \
    tronwalletapplication.cpp \
    tron/proto/api/api.pb.cc \
    tron/proto/api/api.grpc.pb.cc \
    tron/proto/core/Tron.pb.cc \
    tron/proto/core/Discover.pb.cc \
    tron/proto/core/contract/balance_contract.pb.cc \
    tron/proto/core/contract/common.pb.cc \
    tron/proto/core/contract/shield_contract.pb.cc \
    tron/proto/core/contract/proposal_contract.pb.cc \
    tron/proto/core/contract/storage_contract.pb.cc \
    tron/proto/core/contract/exchange_contract.pb.cc \
    tron/proto/core/contract/asset_issue_contract.pb.cc \
    tron/proto/core/contract/account_contract.pb.cc \
    tron/proto/core/contract/witness_contract.pb.cc \
    tron/proto/core/contract/smart_contract.pb.cc \
    tron/proto/core/contract/market_contract.pb.cc \
    tron/proto/google/api/annotations.pb.cc \
    tron/proto/google/api/http.pb.cc \
    utils.cpp

HEADERS += \
    crypto/base58.h \
    crypto/keccak.h \
    crypto/secp256k1wrapper.h \
    crypto/sha256.h \
    crypto/sha3.h \
    crypto/sm3.h \
    qt/addcurrencydialog.h \
    qt/guiconstants.h \
    qt/guiutil.h \
    qt/optionsmodel.h \
    qt/qvalidatedlineedit.h \
    qt/mainwindow.h \
    qt/optionsdialog.h \
    qt/qvaluecombobox.h \
    qt/tronaddressvalidator.h \
    qt/worker/accountinfoworker.h \
    qt/worker/assetinfoworker.h \
    qt/worker/addcurrencyworker.h \
    qt/worker/transactionbroadcastworker.h \
    tron/account.h \
    tron/accountinfo.h \
    tron/block.h \
    tron/myaccount.h \
    tron/scvalue/scvalueaccount.h \
    tron/scvalue/scvalueuint256.h \
    tron/smartcontractcallbuilder.h \
    tron/smartcontracttype.h \
    tron/scvalue/smartcontractvalue.h \
    tron/transaction.h \
    tron/transfercontracttransaction.h \
    tron/transfertrc20transaction.h \
    tron/tronclient.h \
    tron/asset.h \
    tron/trc10asset.h \
    tron/trc20asset.h \
    tronwalletapplication.h \
    utils.h


FORMS += \
    qt/forms/addcurrencydialog.ui \
    qt/forms/mainwindow.ui \
    qt/forms/optionsdialog.ui

QT_QRC_LOCALE = qt/locale.qrc

TRANSLATIONS += \
    qt/translations/tronwallet_zh_CN.ts
CONFIG += lrelease
CONFIG+=link_pkgconfig
PKGCONFIG+=grpc++ protobuf libsecp256k1 libqrencode
#CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qt/locale.qrc
