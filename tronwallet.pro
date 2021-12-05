QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

INCLUDEPATH += tron/proto/

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    crypto/base58.cpp \
    crypto/sha256.cpp \
    crypto/sm3.cpp \
    main.cpp \
    qt/guiutil.cpp \
    qt/optionsmodel.cpp \
    qt/qvalidatedlineedit.cpp \
    qt/mainwindow.cpp \
    qt/optionsdialog.cpp \
    qt/qvaluecombobox.cpp \
    qt/tronaddressentryvalidator.cpp \
    tron/account.cpp \
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
    crypto/sha256.h \
    crypto/sm3.h \
    qt/guiconstants.h \
    qt/guiutil.h \
    qt/optionsmodel.h \
    qt/qvalidatedlineedit.h \
    qt/mainwindow.h \
    qt/optionsdialog.h \
    qt/qvaluecombobox.h \
    qt/tronaddressentryvalidator.h \
    tron/account.h \
    tronwalletapplication.h \
    utils.h


FORMS += \
    qt/forms/mainwindow.ui \
    qt/optionsdialog.ui

QT_QRC_LOCALE = qt/locale.qrc

TRANSLATIONS += \
    qt/translations/tronwallet_zh_CN.ts
CONFIG += lrelease
#CONFIG += embed_translations

LIBS += -lgrpc++ -lgrpc -lprotobuf -lpthread -lgrpc -laddress_sorting -lre2 -lupb -lcares -lz -lgpr -lssl -lcrypto -labsl_raw_hash_set -labsl_hashtablez_sampler -labsl_hash -labsl_city -labsl_low_level_hash -labsl_statusor -labsl_status -labsl_cord -labsl_cordz_info -labsl_cord_internal -labsl_cordz_functions -labsl_exponential_biased -labsl_cordz_handle -labsl_bad_optional_access -labsl_str_format_internal -labsl_synchronization -labsl_graphcycles_internal -labsl_stacktrace -labsl_symbolize -labsl_debugging_internal -labsl_demangle_internal -labsl_malloc_internal -labsl_time -labsl_civil_time -labsl_strings -labsl_strings_internal -lrt -labsl_base -labsl_spinlock_wait -labsl_int128 -labsl_throw_delegate -labsl_time_zone -labsl_bad_variant_access -labsl_raw_logging_internal -labsl_log_severity


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qt/locale.qrc
