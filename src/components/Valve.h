#pragma once

#include <string>
#include <iostream>
#include "Actuator.h"
#include "Container.h"

class Valve : public Actuator
{
    double position_;
    double max_flow_rate_;

    public:
    Valve(){};
    Valve(Container* variable, Actuator actuator, double max_flow_rate);
    Valve(Container* variable, string name, string description, string tag, double max_flow_rate);
    double position();
    void set_position(double position);
    double max_flow_rate();
    void set_max_flow_rate(double rate);
    double flow_rate();
    void failsafe();
    void print_information();

};