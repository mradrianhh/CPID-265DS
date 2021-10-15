#pragma once

#include <string>
#include "Component.h"

using namespace std;

class Sensor : public Component
{
    Component* variable_;

    public:
    Sensor(){};
    Sensor(Component* variable, Component component);
    Sensor(Component* variable, string name, string description, string tag);
    Component* variable();
};