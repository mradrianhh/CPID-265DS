#include "Sensor.h"

Sensor::Sensor(){};

Sensor::Sensor(Component* variable, Component component) : Component(component.name(), component.description(), "sensor", component.tag())
{
    variable_ = variable;
}

Sensor::Sensor(Component* variable, string name, string description, string tag) : Component(name, description, "sensor", tag)
{
    variable_ = variable;
}

Component* Sensor::variable()
{
    return variable_;
}