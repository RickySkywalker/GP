#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <string>
#include <array>
#include "Superpowers.h"


class EVENT{
private:
    std::string event_name;
    std::string event_description;
    int resource_point;

    Superpower belong_to;

    int change_VP_by;
    int change_DEFCON;

public:
    EVENT(std::string event_name, std::string event_description, Superpower belong_to, int resource_point, int VP, int DEFCON);

    std::string get_name() const;
    std::string get_description() const;
    int get_resource_point() const;
    Superpower get_belong_to() const;
    int get_change_VP() const;
    int get_change_DEFCON() const;

    EVENT() = default;

};





#endif // EVENT_H
