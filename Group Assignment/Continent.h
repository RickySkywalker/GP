//
// Created by Ricky on 2021/11/17.
//


/**
The continent class is the class that represent the concept of the concept of ccontinent in the game it is the region concept between
world and country in the game, the continent is bscally used to count score of the given continent in given round ends.
The count score order is as follows:
    1. no count score for first three rounds
    2. count score of EUROPE in the end of 3rd round
    3. Then at the end of every turn (expect the final turn), the score is counted as the order Central_America, South_America, Africa, Middle_East, Asia
    4. Count the score for every continent at the end of 10-th turn (the final turn)

The count order is given due to the real order of fighting in cold war, for example, in the early turn, the mainpoint is Europe and then go
to Central America Africa and so on and so forth

There are three kinds of score that can be attained for each continent, the presence, domination and control the condition for each is
described in the function comment
*/

#ifndef GROUP_ASSIGNMENT_CONTINENT_H
#define GROUP_ASSIGNMENT_CONTINENT_H

#include "Country.h"
#include <list>

using namespace std;



class Continent{

public:
    //This is the type of all continent
    enum class Contient_type {Europe, Central_America, South_America, Africa, Middle_East, Asia};

    //Constructor for the continent, the continent is constructed without any known of its country it contains it will be added later
    Continent(int presence, int domination, int control, Contient_type type);

    //Count score for given continent
    int count_score();

    //Helper function for initialize the continent, add the given country to the continent
    void add_country(Country* country);

    //Find the given country in the continent by given name
    Country* find_country(string& country_name) const;

    //Give the number of country that contained in the continent, used for iteration
    int get_number_of_key() const;

    //Accessor for the continent
    Contient_type get_type() const;
    int get_presence_score() const;
    int get_domination_score() const;
    int get_control_score() const;

    //Return the list of country in the continent this function is dangerous, so use it carefully
    list<Country*> get_countries();


private:

    //List of country that stores all countries in the continent
    list<Country*> countries;

    //Score for different level of control
    const int presence;
    const int domination;
    const int control;

    //The type of the given continent
    Contient_type type;


    //Helper functions that we will use in this class
    int return_controlled_country(Superpower given) const;
    int return_controlled_key_country(Superpower given) const;
    bool controlled_all_key(Superpower given) const;


};

#endif //GROUP_ASSIGNMENT_CONTINENT_H
