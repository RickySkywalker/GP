#include "event.h"

EVENT::EVENT(std::string event_name, std::string event_description, Superpower belong_to, int resource_point, int VP, int DEFCON):
    event_name(event_name),
    event_description(event_description),
    belong_to(belong_to),
    resource_point(resource_point),
    change_DEFCON(DEFCON),
    change_VP_by(VP){

    if (event_description == ""){
        event_description = "To Be Determined";
    }
}


std::string EVENT::get_name() const{
    return event_name;
}

std::string EVENT::get_description() const{
    return event_description;
}

int EVENT::get_resource_point() const{
    return resource_point;
}

Superpower EVENT::get_belong_to() const{
    return belong_to;
}

int EVENT::get_change_VP() const{
    return change_VP_by;
}

int EVENT::get_change_DEFCON() const{
    return change_DEFCON;
}
