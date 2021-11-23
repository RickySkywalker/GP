#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <string>
#include <array>
#include "Superpowers.h"


class EVENT{
private:
    std::string event_name;
    std::string event_discription;
    int resource_point;

    Superpower belong_to;

    int change_VP_by;
    int change_DEFCON;

    int aaa;

public:
    EVENT(std::string event_name, std::string event_description, Superpower belong_to, int resource_point, int VP, int DEFCON);

};





#endif // EVENT_H
