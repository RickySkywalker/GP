//
// Created by Ricky on 2021/11/17.
//

#include "World.h"
#include "Continent.h"
#include "Country.h"
#include "data_library.cpp"

#include <array>




//This is the constructor of the World calss and is the only constructor that we will use it to construct the world
World::World(): DEFCON(5), VP(0), curr_player(USSR), turn(1), round(1), USA_resource_point(0), USSR_resource_point(0){

    country_array = std::vector<Country*> {&USA_country, &USSR_country, &Norway, &Finland,
                  &Sweden, &Denmark, &Canada, &UK, &EGermany,
                  &Poland, &Benelux, &WGermany, &Czechoslovakia,
                  &France, &Austria, &Hungary, &Romania, &SpainPortugal,
                  &Italy, &Yugoslavia, &Bulgaria, &Turkey, &Greece,
                  &Mexico, &Guatemala, &Cuba, &Haiti, &DominicanRep,
                  &ElSalvador, &Honduras, &Nicaragua, &CostaRica,
                  &Panama, &Venezuela, &Columbia, &Ecuador, &Peru,
                  &Brazil, &Bolivia, &Chile, &Paraguay, &Argentina,
                  &Uruguay, &Morocco, &Algeria, &Tunisia,
                  &WestAfricanStates, &SaharanStates, &Sudan,
                  &IvoryCoast, &Nigeria, &Ethiopia, &Somalia,
                  &Cameroon, &Zaire, &Kenya, &Angola, &Zimbabwe,
                  &SEAfricanStates, &Botswana, &SouthAfrica, &Lebanon,
                  &Syria, &Israel, &Iraq, &Iran, &Libya, &Egypt,
                  &Jordan, &GulfStates, &SaudiArabia, &NKorea,
                  &Afghanistan, &China, &SKorea, &Japan, &Pakistan,
                  &India, &Burma, &LaosCambodia, &TaiwanChina,
                  &Thailand, &Vietnam, &Philippines, &Malaysia,
                  &Indonesia, &Australia};

    continent_array = std::vector<Continent*> {&EUROPE, &CENTRALAMERICA, &SOUTHAMERICA, &AFRICA, &MIDDLEEAST, &ASIA};

    allocate_all_country();
    allocate_all_contient();
}


//The constructor that we use in the load function
//TODO: the format of savefile to be determined
World::World(string& filename){

}

//Judge whether someone will win the game, will be called after the end of each turn (not include the final turn)
Superpower World::win_judgement(){
    if (VP <= -20){
        return USA;
    }else if (VP >= 20){
        return USSR;
    }
    return NO;
}


int World::get_given_influence(Superpower given){
    if (given == USSR){
        return USSR_resource_point;
    }else if (given == USA){
        return USA_resource_point;
    }
}

void World::change_VP(int change_by){
    VP += change_by;
}



//The structure of savefile to be determined
void save(string& filename){

}


void load(string& filename){
    World* world = new World(filename);
}


/**
Steps of Next:

    If has victory return USSR or USA, if not return NO

    End game:
        1. Score count all the reigon

    Change turn:
        1. If DEFCON is smaller than 5 improve it by one when enter the next turn
        2. Calculate whether victory
        3. Advance the turn marker (handled later in GUI)
        4. Reset the round marker

    Change round:
        1. Determine whether need to change turn (if yes excute the change turn)
        2. Advance the round marker
        3. Change curr player

    Change player:
        1. Change player
*/
Superpower World::next(){
    if (curr_player == USA){
        if (round == max_round_number){

            if (turn == max_turn_number){ //End of game
                for (auto curr : continent_array){
                    VP += curr->count_score();
                }
                return (VP > 0 ? USSR : USA);
            }else{              //Change turn only

                if (win_judgement() != NO){
                    return win_judgement();
                }
                //Improve DEFCON
                if (DEFCON < 5){
                    DEFCON++;
                }

                turn++;
                round = 1;
                curr_player = USSR;

            }
        }else{              //Change round
            curr_player = USSR;
            round++;

        }
    }else{

        //Only change player
        curr_player = USA;
    }

    return NO;
}


void World::add_USA_resource_point(int a){
    USA_resource_point += a;
}

void World::add_USSR_resource_point(int a){
    USSR_resource_point += a;
}

bool World::change_DEFCON(int changed_by){
    if (changed_by != 0){
        if (changed_by > 0){                    //The world is away from Nuclear war
            DEFCON ++;
            if (DEFCON > 5){
                DEFCON = 5;
            }
        }else if (changed_by < 0){
            DEFCON--;
            if (DEFCON == 1){
                return true;
            }
        }
    }
    return false;
}


//Will find the country by return its pointer in the country list
Country* World::find_country(string &country_name){
    for (int i = 0; i < total_country_number; i++){
        Country* curr = country_array[i];
        if (curr->get_name() == country_name){
            return curr;
        }
    }
}


void World::count_score(Continent::Contient_type given){
    Continent* curr = continent_array[ static_cast<int>(given)];
    int VP_change = curr->count_score();
    VP += VP_change;
}





int World::get_DEFCON() const{
    return DEFCON;
}

int World::get_VP() const{
    return VP;
}

Superpower World::get_curr_player() const {
    return curr_player;
}

int World::get_round() const{
    return round;
}

int World::get_turn() const{
    return turn;
}

int World::get_USA_influence() const {
    return USA_resource_point;
}

int World::get_USSR_influence() const{
    return USSR_resource_point;
}


