#pragma once

#include "events/Event.h"
#include "queue"
#include <thread>
#include <chrono>

class Simulator
{
    std::queue<Event*> event_queue;

    public:
    Simulator(){};
    void run();
    void schedule_event(Event* event);
};