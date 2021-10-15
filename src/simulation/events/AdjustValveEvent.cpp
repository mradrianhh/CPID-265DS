#include "AdjustValveEvent.h"
#include <iostream>

AdjustValveEvent::AdjustValveEvent(double time_required, double position, Valve* valve) : Event(time_required)
{
    position_ = position;
    valve_ = valve;
}

void AdjustValveEvent::process_event()
{
    std::cout << valve_->tag() << endl;
    valve_->set_position(position_);
}