#include "mainwindow.h"

#include <QString>
#include <QTimer>
#include <QFileDialog>
#include <QMainWindow>
using namespace std;


//given the current round, and show the corresponding label
void MainWindow::change_round(int curr_round){

    switch (curr_round) {
    case 1:
        ui->round1->setVisible(true);
        ui->round2->setVisible(false);
        ui->round3->setVisible(false);
        ui->round4->setVisible(false);
        ui->round5->setVisible(false);
        ui->round6->setVisible(false);
        ui->round7->setVisible(false);
        break;
    case 2:
        ui->round1->setVisible(false);
        ui->round2->setVisible(true);
        ui->round3->setVisible(false);
        ui->round4->setVisible(false);
        ui->round5->setVisible(false);
        ui->round6->setVisible(false);
        ui->round7->setVisible(false);
        break;
    case 3:
        ui->round1->setVisible(false);
        ui->round2->setVisible(false);
        ui->round3->setVisible(true);
        ui->round4->setVisible(false);
        ui->round5->setVisible(false);
        ui->round6->setVisible(false);
        ui->round7->setVisible(false);
        break;
    case 4:
        ui->round1->setVisible(false);
        ui->round2->setVisible(false);
        ui->round3->setVisible(false);
        ui->round4->setVisible(true);
        ui->round5->setVisible(false);
        ui->round6->setVisible(false);
        ui->round7->setVisible(false);
        break;
    case 5:
        ui->round1->setVisible(false);
        ui->round2->setVisible(false);
        ui->round3->setVisible(false);
        ui->round4->setVisible(false);
        ui->round5->setVisible(true);
        ui->round6->setVisible(false);
        ui->round7->setVisible(false);
        break;
    case 6:
        ui->round1->setVisible(false);
        ui->round2->setVisible(false);
        ui->round3->setVisible(false);
        ui->round4->setVisible(false);
        ui->round5->setVisible(false);
        ui->round6->setVisible(true);
        ui->round7->setVisible(false);
        break;
    case 7:
        ui->round1->setVisible(false);
        ui->round2->setVisible(false);
        ui->round3->setVisible(false);
        ui->round4->setVisible(false);
        ui->round5->setVisible(false);
        ui->round6->setVisible(false);
        ui->round7->setVisible(true);
        break;
    }
}

//not given the current round, get the current round by it self, and show the corresponding label
void MainWindow::change_round(){
    int round = world->get_round();
    change_round(round);
}

//given the current turn, and show the corresponding label
void MainWindow::change_turn(int curr_turn){
    switch (curr_turn) {
    case 1:
        ui->turn1->setVisible(true);
        ui->turn2->setVisible(false);
        ui->turn3->setVisible(false);
        ui->turn4->setVisible(false);
        ui->turn5->setVisible(false);
        ui->turn6->setVisible(false);
        ui->turn7->setVisible(false);
        ui->turn8->setVisible(false);
        ui->turn9->setVisible(false);
        ui->turn10->setVisible(false);
        break;
    case 2:
        ui->turn1->setVisible(false);
        ui->turn2->setVisible(true);
        ui->turn3->setVisible(false);
        ui->turn4->setVisible(false);
        ui->turn5->setVisible(false);
        ui->turn6->setVisible(false);
        ui->turn7->setVisible(false);
        ui->turn8->setVisible(false);
        ui->turn9->setVisible(false);
        ui->turn10->setVisible(false);
        break;
    case 3:
        ui->turn1->setVisible(false);
        ui->turn2->setVisible(false);
        ui->turn3->setVisible(true);
        ui->turn4->setVisible(false);
        ui->turn5->setVisible(false);
        ui->turn6->setVisible(false);
        ui->turn7->setVisible(false);
        ui->turn8->setVisible(false);
        ui->turn9->setVisible(false);
        ui->turn10->setVisible(false);
        break;
    case 4:
        ui->turn1->setVisible(false);
        ui->turn2->setVisible(false);
        ui->turn3->setVisible(false);
        ui->turn4->setVisible(true);
        ui->turn5->setVisible(false);
        ui->turn6->setVisible(false);
        ui->turn7->setVisible(false);
        ui->turn8->setVisible(false);
        ui->turn9->setVisible(false);
        ui->turn10->setVisible(false);
        break;
    case 5:
        ui->turn1->setVisible(false);
        ui->turn2->setVisible(false);
        ui->turn3->setVisible(false);
        ui->turn4->setVisible(false);
        ui->turn5->setVisible(true);
        ui->turn6->setVisible(false);
        ui->turn7->setVisible(false);
        ui->turn8->setVisible(false);
        ui->turn9->setVisible(false);
        ui->turn10->setVisible(false);
        break;
    case 6:
        ui->turn1->setVisible(false);
        ui->turn2->setVisible(false);
        ui->turn3->setVisible(false);
        ui->turn4->setVisible(false);
        ui->turn5->setVisible(false);
        ui->turn6->setVisible(true);
        ui->turn7->setVisible(false);
        ui->turn8->setVisible(false);
        ui->turn9->setVisible(false);
        ui->turn10->setVisible(false);
        break;
    case 7:
        ui->turn1->setVisible(false);
        ui->turn2->setVisible(false);
        ui->turn3->setVisible(false);
        ui->turn4->setVisible(false);
        ui->turn5->setVisible(false);
        ui->turn6->setVisible(false);
        ui->turn7->setVisible(true);
        ui->turn8->setVisible(false);
        ui->turn9->setVisible(false);
        ui->turn10->setVisible(false);
        break;
    case 8:
        ui->turn1->setVisible(false);
        ui->turn2->setVisible(false);
        ui->turn3->setVisible(false);
        ui->turn4->setVisible(false);
        ui->turn5->setVisible(false);
        ui->turn6->setVisible(false);
        ui->turn7->setVisible(false);
        ui->turn8->setVisible(true);
        ui->turn9->setVisible(false);
        ui->turn10->setVisible(false);
        break;
    case 9:
        ui->turn1->setVisible(false);
        ui->turn2->setVisible(false);
        ui->turn3->setVisible(false);
        ui->turn4->setVisible(false);
        ui->turn5->setVisible(false);
        ui->turn6->setVisible(false);
        ui->turn7->setVisible(false);
        ui->turn8->setVisible(false);
        ui->turn9->setVisible(true);
        ui->turn10->setVisible(false);
        break;
    case 10:
        ui->turn1->setVisible(false);
        ui->turn2->setVisible(false);
        ui->turn3->setVisible(false);
        ui->turn4->setVisible(false);
        ui->turn5->setVisible(false);
        ui->turn6->setVisible(false);
        ui->turn7->setVisible(false);
        ui->turn8->setVisible(false);
        ui->turn9->setVisible(false);
        ui->turn10->setVisible(true);
        break;
    }
}

//not given the current turn, get the current turn by it self, and show the corresponding label
void MainWindow::change_turn(){
    int turn = world->get_turn();
    change_turn(turn);
}

void MainWindow::change_DEFCON(int defcon){
    switch (defcon) {
    case 1:
        ui->defcon1->setVisible(true);
        ui->defcon2->setVisible(false);
        ui->defcon3->setVisible(false);
        ui->defcon4->setVisible(false);
        ui->defcon5->setVisible(false);
        break;
    case 2:
        ui->defcon1->setVisible(false);
        ui->defcon2->setVisible(true);
        ui->defcon3->setVisible(false);
        ui->defcon4->setVisible(false);
        ui->defcon5->setVisible(false);
        break;
    case 3:
        ui->defcon1->setVisible(false);
        ui->defcon2->setVisible(false);
        ui->defcon3->setVisible(true);
        ui->defcon4->setVisible(false);
        ui->defcon5->setVisible(false);
        break;
    case 4:
        ui->defcon1->setVisible(false);
        ui->defcon2->setVisible(false);
        ui->defcon3->setVisible(false);
        ui->defcon4->setVisible(true);
        ui->defcon5->setVisible(false);
        break;
    case 5:
        ui->defcon1->setVisible(false);
        ui->defcon2->setVisible(false);
        ui->defcon3->setVisible(false);
        ui->defcon4->setVisible(false);
        ui->defcon5->setVisible(true);
        break;
    }
}

void MainWindow::change_DEFCON(){
    int defcon = world->get_DEFCON();
    change_DEFCON(defcon);
}

void MainWindow::change_VP(int VP){
    if(VP == 0){
        ui->VP->setText(QString::number(VP));
        ui->VP->setStyleSheet("color:black");
    }
    else if(VP > 0){
        ui->VP->setText(QString::number(VP));
        ui->VP->setStyleSheet("color:#0080c0");
    }
    else if(VP < 0){
        ui->VP->setText(QString::number(-VP));
        ui->VP->setStyleSheet("color:#bf2026");
    }
}

void MainWindow::change_VP(){
    int VP = world->get_VP();
    change_VP(VP);
}
