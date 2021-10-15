#pragma once

#include <string>
#include <iostream>
#include <unordered_map>
#include "Sensor.h"
#include "Actuator.h"

using namespace std;

class Loop
{
    string tag_;
    unordered_map<string, Sensor> sensors_;
    unordered_map<string, Actuator> actuators_;
    double target_value_;
    double actual_value_;
    double error_;
    double proportional_factor_;
    double proportional_proportionality_factor_;
    double integral_proportionality_factor_;
    double differential_proportionality_factor_;

    void calculate_error();
    double calculate_proportional();
    double calculate_integral();
    double calculate_differential();

    public:
    Loop(){};
    Loop(string tag, unordered_map<string, Sensor> sensors, unordered_map<string, Actuator> actuators);
    void print_information();
    void add_actuator(Actuator actuator);
    void add_sensor(Sensor sensor);
    double target_value();
    void set_target_value(double target_value);
    double actual_value();
    void set_actual_value(double actual_value);
    unordered_map<string, Actuator> actuators();
    Actuator actuator(string key);
    unordered_map<string, Sensor> sensors();
    Sensor sensor(string key);
    double error();
    void set_error(double error);
    double proportional_factor();
    void set_proportional_factor(double factor);
    double proportional_proportionality_factor();
    void set_proportional_proportionality_factor(double factor);
    double integral_proportionality_factor();
    void set_integral_proportionality_factor(double factor);
    double differential_proportionality_factor();
    void set_differential_proportionality_factor(double factor);
};