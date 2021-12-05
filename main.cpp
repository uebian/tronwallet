#include "qt/mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "tronwalletapplication.h"
#include "tron/proto/api/api.grpc.pb.h"
#include "tron/proto/api/api.pb.h"
#include "tron/proto/core/Tron.pb.h"
#include "tron/proto/core/contract/balance_contract.pb.h"
#include "crypto/base58.h"
#include <grpcpp/grpcpp.h>
#include "tron/account.h"

/*int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "tronwallet_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();
    return a.exec();
}*/

int main(int argc, char* argv[]) {
    std::shared_ptr<grpc::Channel> channel=grpc::CreateChannel("grpc.shasta.trongrid.io:50051", grpc::InsecureChannelCredentials());
    auto stub=protocol::Wallet::NewStub(channel);
    protocol::Account account,account1;
    unsigned char address[21];
    if(Account::convertAndValidateAddress("TWGhxdFA5Yq4v9w8Y1z37jJqz9kN1c9PDj",address))
    {
        account.set_address(address,21);
        grpc::ClientContext ctx;
        grpc::Status status= stub->GetAccount(&ctx,account,&account1);
        std::cout<<account1.balance()<<std::endl;
    }else{
        std::cout<<"error"<<std::endl;
    }
    return GuiMain(argc, argv);
}

