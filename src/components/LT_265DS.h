#pragma once

#include <string>
#include <iostream>
#include "Sensor.h"

#define DENSITY 981
#define GRAVITATIONAL_CONSTANT 9.81

using namespace std;

class LT_265DS : public Sensor
{
    public:
    LT_265DS();
    LT_265DS(Sensor sensor);
    LT_265DS(Component* variable, Component component);
    LT_265DS(Component* variable, string name, string description, string tag);
};