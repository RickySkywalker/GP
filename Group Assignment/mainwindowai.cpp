#include "mainwindowai.h"

#include "World.h"
#include "Country.h"
#include "Continent.h"
#include "Superpowers.h"
#include "mainwindow.h"

#include <queue>


MainWindowAI::MainWindowAI(World* const world, Superpower AIplayer, QWidget* parent): 
    MainWindow(world, parent), AIplayer(AIplayer)
{

    if (AIplayer == USSR){
        main_AI();
        //MainWindow::on_btn_next_clicked();
    }

}


void MainWindowAI::main_AI(){
    if (world->get_curr_player() == AIplayer){
        if (coup_mode){
            on_btn_coup_clicked();
        }
       
        
        if (world->get_turn() <= 3){
            decision_tree(Continent::Contient_type::Europe);
        }else{
            decision_tree((Continent::Contient_type) (world->get_turn()%6));
        }
    }
    MainWindow::on_btn_next_clicked();
}



void MainWindowAI::decision_tree(Continent::Contient_type curr_type){
    priority_queue<Country> decision_queue;
    for (Country* curr : world->continent_array[(int) curr_type]->get_countries()){
        if (curr->check_control() != AIplayer){
            decision_queue.push(*curr);
        }
    }
    while(get_remainning_resource_point() != 0){
        Country to_add = decision_queue.top();
        decision_queue.pop();

        std::string this_name = to_add.get_name();

        Country* this_in_world = world->find_country(this_name);
        if (this_in_world->check_add_influence(AIplayer) != -1){

            while (this_in_world->check_control() != AIplayer && get_remainning_resource_point() > 0){
                if (this_in_world->check_add_influence(AIplayer) != -1){
                    if (AIplayer == USA){
                        on_country_clicked_helper(this_name, AIplayer, USA_button_map[this_name]);
                    }else if (AIplayer == USSR){
                        on_country_clicked_helper(this_name, AIplayer, USSR_button_map[this_name]);
                    }
                    change_icon(this_name, USA_button_map[this_name], USSR_button_map[this_name]);

                    //_sleep(1);
                }
            }
        }
    }
}



//This function will get the useable points for AI player
int MainWindowAI::get_remainning_resource_point(){
    if (AIplayer == USSR){
        return world->get_USSR_influence();
    }else if (AIplayer == USA){
        return world->get_USA_influence();
    }
}


void MainWindowAI::on_btn_next_clicked(){
    MainWindow::on_btn_next_clicked();

    if (world->get_turn() == 2) {
        //cout << "bbb" << endl;
    }

    if (world->get_curr_player() == AIplayer){
        main_AI();
    }
}
