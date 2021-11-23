#include "mainwindow.h"
#include "menuwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Test for main window
//    MainWindow* w = new MainWindow{new World(), nullptr};
//    w->show();

    //Test for menu window
    MenuWindow w;
    w.show();

    return a.exec();
}
