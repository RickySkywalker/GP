#include "mainwindow.h"
#include "event.h"
#include "event_library.cpp"
#include "eventpopupwindow.h"

#include <QString>
#include <QTimer>
#include <QFileDialog>
#include <QMainWindow>
using namespace std;


void MainWindow::event_helper(){
    int event_index = rand()%20;
    if (world->get_curr_player() == USSR){

    }
}


void MainWindow::pop_up_event(EVENT *event){
    QMainWindow* event_windows = new EventPopUpWindow(event, nullptr);

    event_windows->setAttribute(Qt::WA_DeleteOnClose);

    event_windows->show();
}

