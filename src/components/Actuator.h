#pragma once

#include <string>
#include "Component.h"

using namespace std;

class Actuator : public Component
{
    Component* variable_;

    public:
    Actuator(){};
    Actuator(Component* variable, Component component);
    Actuator(Component* variable, string name, string description, string tag);
    Component* variable();
};