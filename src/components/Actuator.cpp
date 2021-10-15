#include "Actuator.h"

Actuator::Actuator(Component* variable, string name, string description, string tag) : Component(name, description, "actuator", tag)
{
    variable_ = variable;
};

Actuator::Actuator(Component* variable, Component component) : Component(component.name(), component.description(), "actuator", component.tag())
{
    variable_ = variable;
};

Component* Actuator::variable()
{
    return variable_;
};