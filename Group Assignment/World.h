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

    vector<Continent*> continent_array;
    vector<Country*> country_array;

    World(std::string& filename);
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


public:

    Country USA_country{0, "USA_country", false};
    Country USSR_country{0, "USSR_country", false};

    // Europe
    Country Norway{4, "Norway", false};
    Country Finland{4, "Finland", false};
    Country Sweden{4, "Sweden", false};
    Country Denmark{3, "Denmark", false};
    Country Canada{4, "Canada", false};
    Country UK{5, "UK", false};
    Country EGermany{3, "EGermany", true};
    Country Poland{3, "Poland", true};
    Country Benelux{3, "Benelux", false};
    Country WGermany{4, "WGermany", true};
    Country Czechoslovakia{3, "Czechoslovakia", false};
    Country France{3, "France", true};
    Country Austria{4, "Austria", false};
    Country Hungary{3, "Hungary", false};
    Country Romania{3, "Romania", false};
    Country SpainPortugal{2, "SpainPortugal", false};
    Country Italy{2, "Italy", true};
    Country Yugoslavia{3, "Yugoslavia", false};
    Country Bulgaria{3, "Bulgaria", false};
    Country Turkey{2, "Turkey", false};
    Country Greece{2, "Greece", false};

    // Central_America
    Country Mexico{2, "Mexico", false};
    Country Guatemala{1, "Guatemala", false};
    Country Cuba{3, "Cuba", true};
    Country Haiti{1, "Haiti", false};
    Country DominicanRep{1, "DominicanRep", false};
    Country ElSalvador{1, "ElSalvador", false};
    Country Honduras{1, "Honduras", false};
    Country Nicaragua{1, "Nicaragua", false};
    Country CostaRica{3, "CostaRica", false};
    Country Panama{2, "Panama", true};

    // South_America
    Country Venezuela{2, "Venezuela", true};
    Country Columbia{1, "Colombia", false};
    Country Ecuador{2, "Ecuador", false};
    Country Peru{2, "Peru", false};
    Country Brazil{2, "Brazil", true};
    Country Bolivia{2, "Bolivia", true};
    Country Chile{3, "Chile", true};
    Country Paraguay{2, "Paraguay", false};
    Country Argentina{2, "Argentina", true};
    Country Uruguay{2, "Uruguay", false};

    // Africa
    Country Morocco{3, "Morocco", false};
    Country Algeria{2, "Algeria", true};
    Country Tunisia{2, "Tunisia", true};
    Country WestAfricanStates{2, "WestAfricanStates", false};
    Country SaharanStates{1, "SaharanStates", false};
    Country Sudan{1, "Sudan", false};
    Country IvoryCoast{2, "IvoryCoast", false};
    Country Nigeria{1, "Nigeria", true};
    Country Ethiopia{1, "Ethiopia", false};
    Country Somalia{2, "Somalia", false};
    Country Cameroon{1, "Cameroon", false};
    Country Zaire{1, "Zaire", true};
    Country Kenya{2, "Kenya", false};
    Country Angola{1, "Angola", true};
    Country Zimbabwe{1, "Zimbabwe", false};
    Country SEAfricanStates{1, "SEAfricanStates", false};
    Country Botswana{2, "Botswana", false};
    Country SouthAfrica{3, "SouthAfrica", true};

    // Middle_East
    Country Lebanon{1, "Lebanon", false};
    Country Syria{2, "Syria", false};
    Country Israel{4, "Israel", true};
    Country Iraq{3, "Iraq", true};
    Country Iran{2, "Iran", true};
    Country Libya{2, "Libya", true};
    Country Egypt{2, "Egypt", true};
    Country Jordan{2, "Jordan", false};
    Country GulfStates{3, "GulfStates", false};
    Country SaudiArabia{3, "SaudiArabia", true};

    // Asia
    Country NKorea{3, "NKorea", true};
    Country Afghanistan{2, "Afghanistan", false};
    Country China{5, "China", false};
    Country SKorea{3, "SKorea", true};
    Country Japan{4, "Japan", true};
    Country Pakistan{2, "Pakistan", true};
    Country India{3, "India", true};
    Country Burma{2, "Burma", false};
    Country LaosCambodia{1, "LaosCambodia", false};
    Country TaiwanChina{3, "TaiwanChina", false};
    Country Thailand{2, "Thailand", true};
    Country Vietnam{1, "Vietnam", false};
    Country Philippines{2, "Philippines", false};
    Country Malaysia{2, "Malaysia", false};
    Country Indonesia{1, "Indonesia", false};
    Country Australia{4, "Australia", false};
    // construct an array contain all the countries


    // set neighbors in the function (^_^) !!
    // roughly from up to down


    Continent EUROPE{3, 7, -1, Continent::Contient_type::Europe};
    Continent CENTRALAMERICA{1, 3, 5, Continent::Contient_type::Central_America};
    Continent SOUTHAMERICA{2, 5, 6, Continent::Contient_type::South_America};
    Continent AFRICA{1, 4, 6, Continent::Contient_type::Africa};
    Continent MIDDLEEAST{3, 5, 7, Continent::Contient_type::Middle_East};
    Continent ASIA{3, 7, 9, Continent::Contient_type::Asia};



};

#endif //GROUP_ASSIGNMENT_WORLD_H
