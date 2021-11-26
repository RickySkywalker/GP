//
// Created by Ricky on 2021/11/17.
//

#include "World.h"
#include "Continent.h"
#include "Country.h"
#include "data_library.cpp"

#include <fstream>
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

    ifstream saved_file;
    saved_file.open(filename);
    // set the member variable
    saved_file >> turn;
    saved_file >> round;
    saved_file >> DEFCON;
    saved_file >> VP;
    int current_superpower;
    saved_file >> current_superpower;
    curr_player = static_cast<Superpower>(current_superpower);
    saved_file >> USA_resource_point;
    saved_file >> USSR_resource_point;
    // set the influence points of countries
    for (int i = 2; i <= 86; ++i){
        int curr_USA_point = country_array[i]->get_USA_influence();
        int tar_USA_point;
        saved_file >> tar_USA_point;
        country_array[i]->add_influence(USA, tar_USA_point-curr_USA_point);
        int curr_USSR_point = country_array[i]->get_USSR_influence();
        int tar_USSR_point;
        saved_file >> tar_USSR_point;
        country_array[i]->add_influence(USA, tar_USSR_point-curr_USSR_point);
    }
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
    return 0;
}

void World::change_VP(int change_by){
    VP += change_by;
}



//The format of savefile is determined in save file format.txt
void World::save(string& filename){
    ofstream output_file;
    output_file.open(filename);
    // output member variable
    output_file << turn << endl;
    output_file << round << endl;
    output_file << DEFCON << endl;
    output_file << VP << endl;
    output_file << curr_player << endl;
    output_file << USA_resource_point << endl;
    output_file << USSR_resource_point << endl;
    // output the influence points in each country
    for (int i = 2; i <= 86; ++i){
        output_file << country_array[i]->get_USA_influence() << " "
                    << country_array[i]->get_USSR_influence() << endl;
    }
    output_file.close();
}


void World::load(string& filename){
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
    return nullptr;
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


