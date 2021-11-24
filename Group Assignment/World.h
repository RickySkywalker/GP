//
// Created by Ricky on 2021/11/17.
//
#ifndef GROUP_ASSIGNMENT_WORLD_H
#define GROUP_ASSIGNMENT_WORLD_H

#include <iostream>
#include <deque>
#include <list>
#include <queue>

#include "Country.h"
#include "Continent.h"
#include "Superpowers.h"
#include <vector>

using namespace std;

//Whenever using superpower using true to represent USA and use false to represent USSR

//Event part is leaved for later

class World{
private:



    const int total_country_number = 87;           //The number of country that this world have
    const int total_continent_number = 6;
    vector<Continent*> continent_array;
    Country** country_array;
    int DEFCON = 5;                     //represent the DEFCON level 1 to 5. Five means peace and one means hot war
    int VP = 0;                         //Victory point
    Superpower curr_player;
    int turn;
    int round;
    int USA_resource_point;
    int USSR_resource_point;

    const int max_turn_number = 10;
    const int max_round_number = 7;

    void allocate_all_country();
    void allocate_all_contient();

public:
    World(string& filename);
    World();
    Superpower next();
    Superpower win_judgement();
    void save(string& filename);
    void load(string& filename);
    Country* find_country(string& country_name);

    void count_score(Continent::Contient_type given);

    //mutators
    void add_USA_resource_point(int a);
    void add_USSR_resource_point(int a);

    //Will be called if we change the DEFCON
    //Return type will tell whether this will cause an end game false for not, true for yes
    bool change_DEFCON(int changed_by);
    void change_VP(int change_by);

    int get_given_influence(Superpower given);


    //accessors
    int get_DEFCON() const;
    int get_VP() const;
    Superpower get_curr_player() const;
    int get_round() const;
    int get_turn() const;
    int get_USA_influence() const;
    int get_USSR_influence() const;



};

#endif //GROUP_ASSIGNMENT_WORLD_H
