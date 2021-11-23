//
// Created by Ricky on 2021/11/17.
//

#ifndef GROUP_ASSIGNMENT_COUNTRY_H
#define GROUP_ASSIGNMENT_COUNTRY_H

#include <list>
#include <string>
#include "Superpowers.h"

using namespace std;

class Country{
private:

    //Changed the control status of the country from two bool to the enum Superpower on 20 Nov
    Superpower controlled_by;

    const int stability;
    int USA_influence;
    int USSR_influence;
    std::string country_name;
    list<Country*> neighbor;
    bool key_country;


    //Helper functions
    bool change_control_after_influence_change(Superpower given);


public:

    //Return the resource point change if we add one influence to the country
    //return -1 if can't be added
    int check_add_influence(Superpower given);

    Country(int stability, std::string country_name, bool key_country);


    bool add_influence(Superpower superpower, int add = 1);
    bool coup(Superpower superpower, int point_used);
    void set_neighbor(Country* neighbor);

    //Accessor
    bool can_coup(Superpower superpower) const;
    bool is_key_country() const;
    string get_name() const;
    Superpower check_control() const;
    int min_coup_cost() const;
    bool is_neighbor(Country* country) const;

    int get_USA_influence() const;
    int get_USSR_influence() const;
};

#endif //GROUP_ASSIGNMENT_COUNTRY_H
