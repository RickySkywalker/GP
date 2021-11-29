//
// Created by Ricky on 2021/11/17.
//

/**
This class fundamentally do the basic object of country in the game, it is the most basic party in the game. Almost every play method is based
on country in this game.
*/


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

    //The stability of the country represent the hardness for the country to be controlled by other superpowers or the hardness to make
    //the country to change who they are be controlled by
    int stability;

    //These represent the two superpowers' influence to the given country
    int USA_influence;
    int USSR_influence;

    //The name of the country, it is the key for us to locate every country in the game
    std::string country_name;

    //In the stage of changing influence, it will use the neighbor concept of the country and this is the list that store the neighbor
    //for the given country. If there are no influence for the superpower in the given country and the neighbor country do not comtrolled
    //by the given superpower, then influence cannot be added to the country
    list<Country*> neighbor;

    //There is the concept of key country in the game, the country that are important in the cold-war is regarded as key country for example
    //West/East Germany, France, Poland, Egypt and so on and so forth
    bool key_country;


    //Helper functions
    bool change_control_after_influence_change(Superpower given);


public:

    //Return the resource point change if we add one influence to the country
    //return -1 if can't be added
    int check_add_influence(Superpower given);

    Country(int stability, std::string country_name, bool key_country);


    /** This function is for change influence for the given points, the add is by default 1 and the superpower represent the superpower whose
     * influence is about to change
    */
    bool add_influence(Superpower superpower, int add = 1);


    /** There are a coup function in the countrythat represents the most server way to change the country's controllship besides the war
     *  and the coup has its own rules, see the function for detail
    */
    bool coup(Superpower superpower, int point_used);

    //Helper function for initializing the country, add neighbor to the country
    void set_neighbor(Country* neighbor);

    //Accessors

    //return whether the superpower can coup in the given country
    bool can_coup(Superpower superpower) const;

    bool is_key_country() const;
    string get_name() const;
    Superpower check_control() const;

    //Return the min coup cost for the given country, to prevent the abuse of coup, the min usage of point is limited to 2
    int min_coup_cost() const;

    //For two country, this function will return whether thay are neighbor
    bool is_neighbor(Country* country) const;

    int get_USA_influence() const;
    int get_USSR_influence() const;

    //Member wise copy the country, should be set default, however it do not work for default so we implement it ourself
    Country& operator= (Country const & a);


    //These is the operator overloading for the country, since in AI, it has need to compare the country so we make the country comparable
    bool operator< (Country const & given) const;
    bool operator> (Country const & given) const;
    bool operator== (Country const & given) const;
};

#endif //GROUP_ASSIGNMENT_COUNTRY_H
