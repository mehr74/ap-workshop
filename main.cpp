#include "mainwindow.h"
#include <QApplication>
#include "loginwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MagicLib::LoginWindow *lw = new MagicLib::LoginWindow();
    lw->show();
    return a.exec();
}
