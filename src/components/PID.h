#pragma once

#include <string>
#include "Controller.h"
#include "Actuator.h"
#include "Sensor.h"
#include <unordered_map>
#include "Loop.h"

using namespace std;

class PID : public Controller
{
    unordered_map<string, Loop> loops_;

    public:
    PID(){};
    PID(string tag, string name, string description);
    unordered_map<string, Loop> loops();
    void set_loops(unordered_map<string, Loop> loops);
    Loop loop(string tag);
};