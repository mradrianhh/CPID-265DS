#pragma once

#include <iostream>
#include <string>
#include "Component.h"

using namespace std;

class Container : public Component
{
    double fluid_level_;

    public:
    Container(){};
    Container(Component component);
    Container(string name, string description, string tag);
    double fluid_level();
    void print_information();
}; 