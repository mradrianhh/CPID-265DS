#include "Container.h"

Container::Container(){};

Container::Container(Component component) : Component(component.name(), component.description(), "container", component.tag())
{
    fluid_level_ = 0;
}

Container::Container(string name, string description, string tag) : Component(name, description, "container", tag)
{
    fluid_level_ = 0;
};

double Container::fluid_level()
{
    return fluid_level_;
}

void Container::print_information()
{
    Component::print_information();
    cout << "Fluid level: " << fluid_level_ << endl;
}