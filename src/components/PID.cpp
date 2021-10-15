#include "PID.h"

PID::PID(string tag, string name, string description) : Controller(name, description, tag){};

unordered_map<string, Loop> PID::loops()
{
    return loops_;
};

void PID::set_loops(unordered_map<string, Loop> loops)
{
    loops_ = loops;
};

Loop PID::loop(string tag)
{
    return loops_[tag];
};