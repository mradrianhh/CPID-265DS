#pragma once

#include <string>
#include <iostream>

using namespace std;

class Component
{
    string name_;
    string description_;
    string type_;
    string tag_;

    public:
    Component(){};
    Component(string name, string description, string type, string tag);
    void print_information();
    string name();
    string description();
    string type();
    string tag();
};