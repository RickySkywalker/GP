#include "mainwindow.h"
#include "couppopwindow.h"
//#include "ui_mainwindow.h"
#include "coupdialogwindow.h"
#include "event.h"
//#include "mainwindow_event.cpp"
#include "initialize_countries.cpp"

#include <QString>
#include <QTimer>
#include <QFileDialog>
#include <QMainWindow>
#include <QMediaPlayer>
using namespace std;


QTimer* timer = new QTimer();

QFont influence_tag_font{"Microsoft YaHei", 20, 75};

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
    setWindowTitle("TS Light");

    change_DEFCON();
    change_round();
    change_VP();
    change_turn();

    event_helper();
    initialize_button_list();

    playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/Music/Music/1.wav"));
    playlist->addMedia(QUrl("qrc:/Music/Music/2.wav"));
    playlist->addMedia(QUrl("qrc:/Music/Music/3.wav"));
    playlist->addMedia(QUrl("qrc:/Music/Music/4.wav"));
    playlist->addMedia(QUrl("qrc:/Music/Music/5.wav"));
    playlist->addMedia(QUrl("qrc:/Music/Music/6.wav"));
    playlist->addMedia(QUrl("qrc:/Music/Music/7.wav"));
    playlist->addMedia(QUrl("qrc:/Music/Music/8.wav"));

    playlist->setPlaybackMode(QMediaPlaylist::Random);
    music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();

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
        ui->curr_player_display->setStyleSheet("font: 30pt \"Comic Sans MS\";"
                                         "background-image: url(:/new/prefix1/Photo/Empty background.png);"
                                         "color:red;");
    }else if (world->get_curr_player() == USA){
        ui->curr_player_display->setText("USA");
        ui->curr_player_display->setStyleSheet("font: 30pt \"Comic Sans MS\";"
                                        "background-image: url(:/new/prefix1/Photo/Empty background.png);"
                                        "color:blue");
    }

    ui->curr_player_display->setAlignment(Qt::AlignHCenter);


    ui->USSR_resource->setStyleSheet("font: 35pt \"Comic Sans MS\";"
                                     "background-color:white;color:red;");
    ui->USA_resource->setStyleSheet("font: 35pt \"Comic Sans MS\";"
                                    "background-color:white;color:blue");
    change_DEFCON();
    change_VP();

    if (world->get_DEFCON() == 1){
        end_game();
    }
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
                    max_cost = world->get_USA_influence();
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
                if (curr->is_key_country()){
                    world->change_DEFCON(-1);
                }
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
        curr->setText(QString::fromStdString(coup_on));
        curr->setStyleSheet("font: 30pt \"Comic Sans MS\";"
                            "background-color:white;color:red;");
    }else{
        curr->setText(QString::fromStdString(coup_off));
        curr->setStyleSheet("font: 30pt \"Comic Sans MS\";"
                            "background-color:white;color:green;");
    }
}

void MainWindow::on_btn_coup_clicked(){
    coup_mode = (!coup_mode);
    change_btn_coup_style();
}





//This will handle everything after next button is clicked
void MainWindow::on_btn_next_clicked(){
    next_helper();
}

void MainWindow::end_game(){
    ui->back_ground->setStyleSheet("");
}


void MainWindow::score_count_helper(){
    if (world->get_curr_player() == USSR){
        if (world->get_turn() == 1){
            world->count_score(Continent::Contient_type::Europe);
        }else if (world->get_turn() == 4){
            world->count_score(Continent::Contient_type::Central_America);
        }else if (world->get_turn() == 5){
            world->count_score(Continent::Contient_type::South_America);
        }else if (world->get_turn() == 6){
            world->count_score(Continent::Contient_type::Africa);
        }else if (world->get_turn() == 7){
            world->count_score(Continent::Contient_type::Middle_East);
        }else if (world->get_turn() == 8){
            world->count_score(Continent::Contient_type::Asia);
        }
    }
}

void MainWindow::next_helper(){

    score_count_helper();

    if (world->win_judgement() != NO){
        end_game();
    }
    world->next();
    change_round();
    change_turn();
    event_helper();

    if (world->get_round() == 7 && world->get_turn() == 10 && world->get_USA_influence() == USA){
        world->count_score(Continent::Contient_type::Europe);
        world->count_score(Continent::Contient_type::Central_America);
        world->count_score(Continent::Contient_type::South_America);
        world->count_score(Continent::Contient_type::South_America);
        world->count_score(Continent::Contient_type::Africa);
        world->count_score(Continent::Contient_type::Middle_East);
        world->count_score(Continent::Contient_type::Asia);
        end_game();
    }




}
