#include "mainwindow.h"
#include "menuwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QCoreApplication::setAttribute(Qt::AA_DisableHighDpiScaling);
    if (qgetenv("QT_FONT_DPI").isEmpty()) {
        qputenv("QT_FONT_DPI", "84");
    }
    //QCoreApplication::setAttribute(Qt::AA_Use96Dpi);
    QApplication a(argc, argv);
    //a.setAttribute(Qt::AA_Use96Dpi);
    //Test for main window
//    MainWindow* w = new MainWindow{new World(), nullptr};
//    w->show();

    //Test for menu window
    MenuWindow w;
    //w.setAttribute(Qt::WA_DeleteOnClose);
    w.show();

    return a.exec();
}
