#include "Loop.h"

Loop::Loop(string tag, unordered_map<string, Sensor> sensors, unordered_map<string, Actuator> actuators)
{
    tag_ = tag;
    sensors_ = sensors;
    actuators_ = actuators;
};

void Loop::print_information()
{
    cout << tag_ << endl;
    cout << "Target value: " << target_value_ << endl;
    cout << "Actual value: " << actual_value_ << endl;
    cout << "Sensors: " << endl;
    for(auto pair : sensors_)
    {
        cout << "\t" << pair.first << " : " << pair.second.description() << endl;
    };
    cout << "Actuators: " << endl;
    for(auto pair : actuators_)
    {
        cout << "\t" << pair.first << " : " << pair.second.description() << endl;
    };
}

void Loop::calculate_error()
{
    error_ = target_value_ - actual_value_;
};

double Loop::calculate_proportional()
{
    return error_ * proportional_factor();
};

double Loop::calculate_integral()
{
    return error_; // TODO: Implement calculation
};

double Loop::calculate_differential()
{
    return error_;// TODO: Implement calculation
};

void Loop::add_actuator(Actuator actuator)
{
    actuators_[actuator.tag()] = actuator;
};

void Loop::add_sensor(Sensor sensor)
{
    sensors_[sensor.tag()] = sensor;
};

double Loop::target_value()
{
    return target_value_;
};

void Loop::set_target_value(double target_value)
{
    target_value_ = target_value;
};

void Loop::set_actual_value(double actual_value)
{
    actual_value_ = actual_value;
};

double Loop::actual_value()
{
    return actual_value_;
};

unordered_map<string, Actuator> Loop::actuators()
{
    return actuators_;
};

Actuator Loop::actuator(string key)
{
    return actuators_[key];
};

unordered_map<string, Sensor> Loop::sensors()
{
    return sensors_;
};

Sensor Loop::sensor(string key)
{
    return sensors_[key];
};

double Loop::error()
{
    return error_;
};

void Loop::set_error(double error)
{
    error_ = error;
};

double Loop::proportional_factor()
{
    return proportional_factor_;
};

void Loop::set_proportional_factor(double factor)
{
    proportional_factor_ = factor;
};

double Loop::proportional_proportionality_factor()
{
    return proportional_proportionality_factor_;
};

void Loop::set_proportional_proportionality_factor(double factor)
{
    proportional_proportionality_factor_ = factor;
};

double Loop::integral_proportionality_factor()
{
    return integral_proportionality_factor_;
};

void Loop::set_integral_proportionality_factor(double factor)
{
    integral_proportionality_factor_ = factor;
};

double Loop::differential_proportionality_factor()
{
    return differential_proportionality_factor_;
};

void Loop::set_differential_proportionality_factor(double factor)
{
    differential_proportionality_factor_ = factor;
};




