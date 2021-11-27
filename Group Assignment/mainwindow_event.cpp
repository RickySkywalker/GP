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
    int event_index = rand()%10;
    int event_type = rand()%2;
    EVENT* curr_event = nullptr;

    if (world->get_curr_player() == USSR){
        if (event_type == 0){
            curr_event = Mutual_event_arr[event_index];
        }else{
            curr_event = USSR_event_arr[event_index];
        }
        world->add_USSR_resource_point(curr_event->get_resource_point());
        bool end = world->change_DEFCON(curr_event->get_change_DEFCON());
        if (end){
            end_game();
        }
        world->change_VP(-curr_event->get_change_VP());
    }else if (world->get_curr_player() == USA){
        if (event_type == 0){
            curr_event = Mutual_event_arr[event_index];
        }else{
            curr_event = USA_event_arr[event_index];
        }
        world->add_USA_resource_point(curr_event->get_resource_point());

        //Change DEFCON if the DEFCON is 1 then end the game
        bool end = world->change_DEFCON(curr_event->get_change_DEFCON());
        if (end){
            end_game();
        }

        world->change_VP(curr_event->get_change_VP());
    }

    pop_up_event(curr_event);


}


void MainWindow::pop_up_event(EVENT *event){
    QMainWindow* event_windows = new EventPopUpWindow(event, world ,nullptr);

    event_windows->setAttribute(Qt::WA_DeleteOnClose);

    event_windows->show();
}

