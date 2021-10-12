#include "Valve.h"

Valve::Valve(){};

Valve::Valve(Container* variable, Actuator actuator, double max_flow_rate) : Actuator(variable, actuator.name(), actuator.description(), actuator.tag())
{
    max_flow_rate_ = max_flow_rate;
    position_ = 0;
}

Valve::Valve(Container* variable, string name, string description, string tag, double max_flow_rate) : Actuator(variable, name, description, tag)
{
    max_flow_rate_ = max_flow_rate;
    position_ = 0;
}

double Valve::position()
{
    return position_;
}

void Valve::set_position(double position)
{
    position_ = position;
}

double Valve::max_flow_rate()
{
    return max_flow_rate_;
}

void Valve::set_max_flow_rate(double rate)
{
    max_flow_rate_ = rate;
}

double Valve::flow_rate()
{
    return position_ * max_flow_rate_;
}

void Valve::failsafe()
{
    position_ = 0;
}

void Valve::print_information()
{
    Actuator::print_information();
    cout << "Max flowrate: " << max_flow_rate_ << endl;
    cout << "Position: " << position_ << endl;
}