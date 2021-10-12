#pragma once

#include <string>
#include "Component.h"

class Controller : public Component
{
    public:
    Controller(Component component);
    Controller(string name, string description, string tag);
};