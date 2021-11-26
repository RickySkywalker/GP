//
// Created by Ricky on 2021/11/17.
//

#ifndef GROUP_ASSIGNMENT_CONTINENT_H
#define GROUP_ASSIGNMENT_CONTINENT_H

#include "Country.h"
#include <list>

using namespace std;



class Continent{

public:
    enum class Contient_type {Europe, Central_America, South_America, Africa, Middle_East, Asia};
    Continent(int presence, int domination, int control, Contient_type type);
    int count_score();
    void add_country(Country* country);
    Country* find_country(string& country_name) const;
    int get_number_of_key() const;
    Contient_type get_type() const;
    int get_presence_score() const;
    int get_domination_score() const;
    int get_control_score() const;

    list<Country*> get_countries();


private:
    list<Country*> countries;           //List of country that stores all countries in the continent
    const int presence;
    const int domination;
    const int control;
    Contient_type type;


    //Helper functions that we will use in this class
    int return_controlled_country(Superpower given) const;
    int return_controlled_key_country(Superpower given) const;
    bool controlled_all_key(Superpower given) const;


};

#endif //GROUP_ASSIGNMENT_CONTINENT_H
