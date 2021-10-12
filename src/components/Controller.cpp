#include "Controller.h"

Controller::Controller(Component component) : Component(component.name(), component.description(), "controller", component.tag()){};

Controller::Controller(string name, string description, string tag) : Component(name, description, "controller", tag){};