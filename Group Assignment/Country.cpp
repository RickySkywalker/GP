//
// Created by Ricky on 2021/11/17.
//

#include "Country.h"
#include <list>
#include <cmath>
using namespace std;

Country::Country(int stability, std::string country_name, bool key_country):
    stability(stability), USA_influence(0), USSR_influence(0), country_name(country_name), key_country(key_country), controlled_by(Superpower::NO){}

//Signle way of setting neighbor of the country
void Country::set_neighbor(Country *neighbor){
    this->neighbor.push_back(neighbor);
}

string Country::get_name() const{
    return country_name;
}

Superpower Country::check_control() const{
    return controlled_by;
}


//This function will handle the addition of influence of the given superpower and return true if it has the control chage
//Note this function is only used when we use the
bool Country::add_influence(Superpower superpower, int add){
    if (superpower == Superpower::USA){
        USA_influence ++;
    }else if (superpower == Superpower::USSR){
        USSR_influence ++;
    }
    return change_control_after_influence_change(superpower);

}

//Will return true if the control change false if not and the given superpower is who just change the influence
//If after addition the influence difference is bigger than the stability of the country then change the control if no one control then the
//controlled_by data member should be NO
bool Country::change_control_after_influence_change(Superpower given){
    if (controlled_by == given){
        return false;
    }else if (controlled_by == Superpower::NO){
        if (given == Superpower::USSR){
            if (USSR_influence - USA_influence >= stability){
                controlled_by = Superpower::USSR;
                return true;
            }
        }else if (given == Superpower::USA){
            if (USA_influence - USSR_influence >= stability){
                controlled_by = Superpower::USA;
                return true;
            }
        }
    }else{
        if (given == Superpower::USSR){
            if (USA_influence - USSR_influence < stability){
                controlled_by = Superpower::NO;
                return true;
            }
        }if (given == Superpower::USA){
            if (USSR_influence - USA_influence < stability){
                controlled_by = Superpower::NO;
                return true;
            }
        }
    }

    return false;
}


/**
Rules for coup:
    1. The coup can only be happened in the country that your enemy have influence not require you to have influence
    2. To coup firstly multiply the stability of the country by 2 and then rool a dice then add the point_used to the dice and minus the
       stability*2 the rest of points will be used to change the influence first minus the enemy's influence then add the influence to our side
    3. the coup on key country will change the DEFCON by lower one (TODO: this will be handled later!!!!!)
    4. Return true if the controlship has change after the coup return false if not (used in the UI to determine whether need to change the buttons

Notice:
    1. This function will only handle the coup of changing of control point of superpower and it will not tale care of resource point cost as well
       as the DEFCON change those are considered in the game_engine
    2. This function will not check whether coup can be done or not, this is leave for the game engine to handle
*/
bool Country::coup(Superpower superpower, int point_used){
    if (can_coup(superpower)){
        int dice = rand() % 6 + 1;
        int point_changed = point_used + dice - stability*2;
        if (superpower == Superpower::USSR){
            if (point_changed > 0){
                if (point_changed <= USA_influence){
                    USA_influence -= point_changed;
                }else{
                    USSR_influence += (point_changed - USA_influence);
                    USA_influence = 0;
                }
            }else{
               if (-point_changed <= USSR_influence){
                   USSR_influence += point_changed;
               }else{
                   USA_influence -= (point_changed + USSR_influence);
                   USSR_influence = 0;
               }
            }
        }if (superpower == Superpower::USA){
            if (point_changed > 0){
                if (point_changed <= USSR_influence){
                    USSR_influence -= point_changed;
                }else{
                    USA_influence += (point_changed - USSR_influence);
                    USSR_influence = 0;
                }
            }else{
                if (-point_changed <= USA_influence){
                    USA_influence += point_changed;
                }else{
                    USSR_influence -= (point_changed + USA_influence);
                    USA_influence = 0;
                }
            }
        }
    }

    return change_control_after_influence_change(superpower);

}

bool Country::can_coup(Superpower superpower) const{
    if (superpower == USSR){
        return USA_influence > 0;
    }else if (superpower == USA){
        return USSR_influence > 0;
    }
    return false;
}


//The min coup cost is 2 if not in a country that has stability greater than 3
int Country::min_coup_cost() const{
    int to_return = stability*2 - 6;
    if (to_return >= 0){
        return to_return + 2;
    }else {
        return 2;
    }
}

bool Country::is_key_country() const{
    return key_country;
}

bool Country::is_neighbor(Country *country) const{
    for (Country* curr : neighbor){
        if (curr == country){
            return true;
        }
    }

    return false;
}


//This function will check whether we can add influence to the given country and how much point it is needed to do so
/**
Rules for addition:
    1.
*/
int Country::check_add_influence(Superpower given){

    //If originally this superpower has influence in the country then will ignore the case thatthe neighbor should have control
    if (given == Superpower::USSR){
        if (this->USSR_influence != 0){
            if (this->check_control() == Superpower::USA){
                return 2;
            }else{
                return 1;
            }
        }
    }else if (given == Superpower::USA){
        if (this->USA_influence != 0){
            if (this->check_control() == Superpower::USSR){
                return 2;
            }else{
                return 1;
            }
        }
    }

    for (Country* curr : neighbor){
        if (curr->check_control() == given){
            if (this->check_control() != given && this->check_control() != Superpower::NO){
                return 2;
            }else{
                return 1;
            }


        }

        if(given == Superpower::USA){
            if (curr->get_name() == "USA_country"){
                if (this->check_control() != given && this->check_control() != Superpower::NO){
                    return 2;
                }else{
                    return 1;
                }
            }
        }else if (given == Superpower::USSR){
            if (curr->get_name() == "USSR_country"){
                if (this->check_control() != given && this->check_control() != Superpower::NO){
                    return 2;
                }else{
                    return 1;
                }
            }
        }
    }
    return -1;
}


//return the superpower influence of the country
int Country::get_USA_influence() const{
    return USA_influence;
}

int Country::get_USSR_influence() const{
    return USSR_influence;
}



bool Country::operator<(Country const &given) const{
    return (abs(USSR_influence - USA_influence) > abs(given.USSR_influence < given.USA_influence));
}

bool Country::operator>(Country const &given) const{
    return (abs(USSR_influence - USA_influence) < abs(given.USSR_influence < given.USA_influence));
}


bool Country::operator==(Country const &given) const{
    return (abs(USSR_influence - USA_influence) == abs(given.USSR_influence < given.USA_influence));
}


Country& Country::operator=(Country const &a){
    this->controlled_by = a.controlled_by;
    this->stability = a.stability;
    this->USA_influence = a.USA_influence;
    this->USSR_influence = a.USSR_influence;
    this->country_name = a.country_name;
    this->neighbor = a.neighbor;
    this->key_country = a.key_country;
}

