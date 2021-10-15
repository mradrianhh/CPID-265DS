#include "Component.h"

Component::Component(string name, string description, string type, string tag)
{
    name_ = name;
    description_ = description;
    type_ = type;
    tag_ = tag;
};

void Component::print_information()
{
    cout << "Tag: " << tag_ << endl;
    cout << "Name: " << name_ << endl;
    cout << "Type: " << type_ << endl;
    cout << "Description: " << description_ << endl;
};

// Getters

string Component::name()
{
    return name_;
};

string Component::description()
{
    return description_;
};

string Component::type()
{
    return type_;
};

string Component::tag()
{
    return tag_;
};
