#include "mainwindow.h"
#include "couppopwindow.h"
//#include "ui_mainwindow.h"
#include "coupdialogwindow.h"
#include "event.h"
#include "event_library.cpp"
#include "initialize_countries.cpp"

#include <QString>
#include <QTimer>
#include <QFileDialog>
#include <QMainWindow>
using namespace std;


QTimer* timer = new QTimer();

QFont influence_tag_font{"Microsoft YaHei", 9, 75};

void MainWindow::initial_setup_helper(int a, string country_name, Superpower given,
                                      QPushButton *button, QPushButton* USA_button, QPushButton* USSR_button){
    for (int i = 0; i < a; i++){
        on_country_clicked_helper(country_name, given, button, true);
    }
    change_icon(country_name, USA_button, USSR_button);

}


MainWindow::MainWindow(World* const world, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), world(world), coup_mode(false)
{
    ui->setupUi(this);

    loop_timer = new QTimer{this};
    connect(loop_timer, &QTimer::timeout, this, &MainWindow::main_loop);
    loop_timer->start(20);
    initialize_button_style();
    //Basic setup for the initial influences
    initialize_default_influence();

}

//Destructor of mainwindow object
MainWindow::~MainWindow()
{
    delete world;
    delete ui;
}

QString usa_resource_point = "USA Resource Point: ";
QString ussr_resource_point = "USSR Resource Point: ";
QString curr_player = "Current Player: ";

//Helper function of mainloop this will handle every change in the window
void MainWindow::main_loop(){
    ui->USA_resource->setText(usa_resource_point + QString::number(world->get_USA_influence()));
    ui->USSR_resource->setText(ussr_resource_point + QString::number(world->get_USSR_influence()));


    if (world->get_curr_player() == USSR){
        ui->curr_player_display->setText("USSR");
        ui->curr_player_display->setStyleSheet("font: 14pt \"Comic Sans MS\";"
                                         "background-image: url(:/new/prefix1/Photo/Empty background.png);"
                                         "color:red;");
    }else if (world->get_curr_player() == USA){
        ui->curr_player_display->setText("USA");
        ui->curr_player_display->setStyleSheet("font: 14pt \"Comic Sans MS\";"
                                        "background-image: url(:/new/prefix1/Photo/Empty background.png);"
                                        "color:blue");
    }

    ui->curr_player_display->setAlignment(Qt::AlignHCenter);


    ui->USSR_resource->setStyleSheet("font: 20pt \"Comic Sans MS\";"
                                     "background-color:white;color:red;");
    ui->USA_resource->setStyleSheet("font: 20pt \"Comic Sans MS\";"
                                    "background-color:white;color:blue");
}

//add influence successfully, may change icon color
void MainWindow::change_icon(string country_name, QPushButton * button_USA ,QPushButton * button_USSR  ){
    Country* curr = world->find_country(country_name);

    //if influence here is 0, do not show it
    if (curr->get_USA_influence() <= 0) {
        button_USA->setFlat(true);
        button_USA->setText(QString());
    }
    else {
        button_USA->setFlat(false);
    }
    if (curr->get_USSR_influence() <= 0) {
        button_USSR->setFlat(true);
        button_USSR->setText(QString());
    }
    else {
        button_USSR->setFlat(false);
    }




    //change background color and text color
    Superpower control = curr->check_control();
    if (control == NO){
        if (curr->get_USA_influence() != 0)
            button_USA->setStyleSheet("background-color:#eaeaea;color:#007ebd");

        if (curr->get_USSR_influence() != 0)
            button_USSR->setStyleSheet("background-color:#eaeaea;color:#d0232a");
    }
    else if (control == USA){
        if (curr->get_USA_influence() != 0)
            button_USA->setStyleSheet("background-color:#0080c0;color:white");

        if (curr->get_USSR_influence() != 0)
            button_USSR->setStyleSheet("background-color:#eaeaea;color:#d0232a");
    }
    else if (control == USSR){
        if (curr->get_USA_influence() != 0)
            button_USA->setStyleSheet("background-color:#eaeaea;color:#007ebd");

        if (curr->get_USSR_influence() != 0)
            button_USSR->setStyleSheet("background-color:#bf2026;color:#fdd01e");
    }


    if (curr->get_USA_influence() != 0){
        button_USA->setText(QString::number(curr->get_USA_influence()));
    }else{
        button_USA->setFlat(true);
    }


    if (curr->get_USSR_influence() != 0){
        button_USSR->setText(QString::number(curr->get_USSR_influence()));
    }else{
        button_USSR->setFlat(true);
    }

    button_USA->setFont(influence_tag_font);
    button_USSR->setFont(influence_tag_font);


}

bool MainWindow::on_country_clicked_helper(string countryname, Superpower given, QPushButton *button, bool in_initial_setup){

    Country* curr = world->find_country(countryname);
    //Handle the status if not in coup mode
    if (!coup_mode){
        if (!in_initial_setup){
                if (world->get_curr_player() == given){
                int change_needed_point = curr->check_add_influence(given);
                if (change_needed_point != -1){
                    if (given == Superpower::USA){
                        if (world->get_USA_influence() >= change_needed_point){


                            //change the superpower influence on the country
                            curr->add_influence(USA);
                            //change USA resource point
                            world->add_USA_resource_point(-change_needed_point);

                        }
                    }
                    else if (given == Superpower::USSR){
                        if (world->get_USSR_influence() >= change_needed_point){


                            //change the superpower influence on the country
                            curr->add_influence(USSR);
                            //change USSR resource point
                            world->add_USSR_resource_point(-change_needed_point);
                        }
                    }
                }
                //button->setFont(influence_tag_font);
                return true;
            }else{
                    return false;
            }
        }else{
            if (given == Superpower::USA){
                //change the superpower influence on the country
                curr->add_influence(USA);

                //change the number of icon of the superpower influence
                //button->setText(QString::number(curr->get_USA_influence()));
            }else if (given == Superpower::USSR){
                //change the superpower influence on the country
                curr->add_influence(USSR);

                //change the number of icon of the superpower influence
                //button->setText(QString::number(curr->get_USSR_influence()));
                //cout << button->text().toStdString() << endl;
            }
        }
        //button->setFont(influence_tag_font);
        return true;
    }else{
        if (given == world->get_curr_player()){
            if (curr->can_coup(given) && curr->min_coup_cost() <= world->get_given_influence(given)){
                int min_cost = curr->min_coup_cost();
                int max_cost = 0;
                if (given == USSR){
                    max_cost = world->get_USSR_influence();
                }else if (given == USA){
                    max_cost = world->get_USSR_influence();
                }
                CoupDialogWindow* coup_window = new CoupDialogWindow(min_cost, max_cost, nullptr);
                coup_window->exec();

                //timer->start(10000);
                int point_used = coup_window->get_point_used();
                if (given == USSR){
                    world->add_USSR_resource_point(-point_used);
                }else if (given == USA){
                    world->add_USA_resource_point(-point_used);
                }
                curr->coup(given, point_used);
                //delete coup_window;
                return true;
            }
        }
    }
    return false;
}






string coup_on = "Coup mode: ON!";
string coup_off = "Coup mode: OFF";
void MainWindow::change_btn_coup_style(){
    QPushButton* curr = ui->btn_coup;
    if (coup_mode){
        curr->setText(QString::fromStdString(coup_off));
        curr->setStyleSheet("font: 20pt \"Comic Sans MS\";"
                            "background-color:white;color:red;");
    }else{
        curr->setText(QString::fromStdString(coup_on));
        curr->setStyleSheet("font: 20pt \"Comic Sans MS\";"
                            "background-color:white;color:green;");
    }
}

void MainWindow::on_btn_coup_clicked(){
    coup_mode = (!coup_mode);
    change_btn_coup_style();
}



//This will handle everything after next button is clicked
void MainWindow::on_btn_next_clicked(){
    world->next();

}



void MainWindow::initialize_default_influence(){
    initial_setup_helper(4, "EGermany", USSR, ui->EGermanyUSSR, ui->EGermanyUSA, ui->EGermanyUSSR);
    initial_setup_helper(4, "Poland", USSR, ui->PolandUSSR, ui->PolandUSA, ui->PolandUSSR);
    initial_setup_helper(4, "China", USSR, ui->ChinaUSSR, ui->ChinaUSA, ui->ChinaUSSR);
    initial_setup_helper(3, "NKorea", USSR, ui->NKoreaUSSR, ui->NKoreaUSA, ui->NKoreaUSSR);
    initial_setup_helper(1, "Yugoslavia", USSR, ui->YugoslaviaUSSR, ui->YugoslaviaUSA, ui->YugoslaviaUSSR);
    initial_setup_helper(1,"Syria", USSR, ui->SyriaUSSR, ui->SyriaUSA, ui->SyriaUSSR);
    initial_setup_helper(1, "Iraq", USSR, ui->IraqUSSR, ui->IraqUSA, ui->IraqUSSR);

    initial_setup_helper(2, "Canada", USA, ui->CanadaUSA, ui->CanadaUSA, ui->CanadaUSSR);
    initial_setup_helper(2, "Panama", USA, ui->PanamaUSA, ui->PanamaUSA, ui->PanamaUSSR);
    initial_setup_helper(5, "UK", USA, ui->UKUSA, ui->UKUSA, ui->UKUSSR);
    initial_setup_helper(4, "WGermany", USA, ui->WGermanyUSA, ui->WGermanyUSA, ui->WGermanyUSSR);
    initial_setup_helper(3, "Italy", USA, ui->ItalyUSA, ui->ItalyUSA, ui->ItalyUSSR);
    initial_setup_helper(1, "Israel", USA, ui->IsraelUSA, ui->IsraelUSA, ui->IsraelUSSR);
    initial_setup_helper(1, "Iran", USA, ui->IranUSA, ui->IranUSA, ui->IranUSSR);
    initial_setup_helper(1, "SKorea", USA, ui->SKoreaUSA, ui->SKoreaUSA, ui->SKoreaUSSR);
    initial_setup_helper(1, "Japan", USA, ui->JapanUSA, ui->JapanUSA, ui->JapanUSSR);
    initial_setup_helper(1, "Philippines", USA, ui->PhilippinesUSA, ui->PhilippinesUSA, ui->PhilippinesUSSR);
    initial_setup_helper(4, "Australia", USA, ui->AustraliaUSA, ui->AustraliaUSA, ui->AustraliaUSSR);
    initial_setup_helper(1, "SouthAfrica", USA, ui->SouthAfricaUSA, ui->SouthAfricaUSA, ui->SouthAfricaUSSR);
}

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
