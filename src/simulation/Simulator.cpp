#include "Simulator.h"

void Simulator::run()
{
    while(!event_queue.empty())
    {
        Event* next_event = event_queue.front();
        event_queue.pop();
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        next_event->process_event();
    }
};

void Simulator::schedule_event(Event* event)
{
    event_queue.push(event);
}