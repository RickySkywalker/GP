#include "Continent.h"
#include "Country.h"




void Continent::add_country(Country *country){
    countries.push_back(country);
}

Continent::Continent(int presence, int domination, int control, Contient_type type):
   presence(presence), domination(domination), control(control), type(type){}


//This will get the number of all key functions in the continent
int Continent::get_number_of_key() const{
    int to_return{0};
    for (Country* curr : countries){
        if (curr->is_key_country())
            to_return++;
    }
    return to_return;
}


//Get the country that specified as the string of country_name in the given continent and return the pointer of it. If not find just return nullptr
Country* Continent::find_country(string &country_name) const{
    for (Country* curr : countries){
        if (curr->get_name() == country_name){
            return curr;
        }
    }
    return nullptr;
}


Continent::Contient_type Continent::get_type() const{
    return type;
}

int Continent::get_presence_score() const{
    return presence;
}

int Continent::get_domination_score() const{
    return domination;
}

int Continent::get_control_score() const{
    return control;
}

//Begin part of count csore
//------------------------------------------------------------------------------------------------------------------------------------------

/**
This function will count score of the whole continent and the rule as follows:
    1. Presence: If one superpower controls any country in the continent then the superpower is presence in the continect
    2. Domination: If one superpower controls more country and more key country in this continent
    3. Control: If one superpower controls more country and all the key country in the contient

Specile rule:
    1. If one superpower achieve the control in the EUROPE then the win score will be add or minus 100 and the superpower will
       immediately win the game
    2. For simplicity we take out the South_east Asia as a sub continent.

*/

int Continent::count_score(){
    int USA_controlled = return_controlled_country(Superpower::USA);
    int USSR_controlled = return_controlled_country(Superpower::USSR);
    int USA_key_controlled = return_controlled_key_country(Superpower::USA);
    int USSR_key_controlled = return_controlled_key_country(Superpower::USSR);

    int total_VP_change = 0;

    if (USA_controlled > 0){
        if (USA_controlled > USSR_controlled && USA_key_controlled > USSR_key_controlled){
            if (controlled_all_key(USA)){
                return control;
            }else{
                return domination;
            }
        }else{
            total_VP_change+=presence;
        }
    }

    if (USSR_controlled > 0){
        if (USSR_controlled > USA_controlled && USSR_key_controlled > USA_key_controlled){
            if (controlled_all_key(Superpower::USSR)){
                return -control;
            }else{
                return -domination;
            }
        }else{
            total_VP_change -= presence;
        }
    }

    return total_VP_change;
}

//This function will return the total number controled country of the given superpower
int Continent::return_controlled_country(Superpower given) const{
    int to_return = 0;
    for (Country* curr : countries){
        if (curr->check_control() == given){
            to_return++;
        }
    }

    return to_return;
}


//This function will return the number of controlled key country in the continet of the give superpower
int Continent::return_controlled_key_country(Superpower given) const{
    int to_return = 0;
    for (Country* curr : countries){
        if (curr->is_key_country()){
            if (curr->check_control() == given){
                to_return++;
            }
        }
    }

    return to_return;
}


//This function will check whether the given superpower controles all key country in the continent
bool Continent::controlled_all_key(Superpower given) const{
    return return_controlled_key_country(given) == get_number_of_key();
}


//------------------------------------------------------------------------------------------------------------------------------------
//End part count of score



list<Country*> Continent::get_countries(){
    return countries;
}
