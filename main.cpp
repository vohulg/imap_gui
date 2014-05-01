#include "mainwindow.h"
#include <QApplication>
#define HOST imap.mail.ru
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
