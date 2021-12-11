#include "qt/mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "tronwalletapplication.h"
#include "tron/myaccount.h"
#include "utils.h"
#include "tron/transfercontracttransaction.h"

int main(int argc, char* argv[]) {
    return GuiMain(argc, argv);
}

