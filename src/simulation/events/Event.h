#pragma once

class Event
{
    double time_required_;
    public:
    Event(double time_required);
    virtual void process_event() = 0;
};