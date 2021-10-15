#include "Event.h"
#include "../../components/Valve.h"

class AdjustValveEvent : public Event
{
    double position_;
    Valve* valve_;

    public:
    AdjustValveEvent(double time_required, double position, Valve* valve);
    virtual void process_event();
};