#include "LT_265DS.h"

LT_265DS::LT_265DS(Component* variable, Component component) : Sensor(variable, component){};

LT_265DS::LT_265DS(Sensor sensor) : Sensor(sensor.variable(), sensor.name(), sensor.description(), sensor.tag()){};

LT_265DS::LT_265DS(Component* variable, string name, string description, string tag) : Sensor(variable, name, description, tag){};
