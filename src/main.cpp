#include <iostream>

#include "simulation/Simulator.h"
#include "simulation/events/AdjustValveEvent.h"
#include "components/Valve.h"
#include "components/Container.h"

using namespace std;

int main()
{
    Container container = Container("T_2", "fluid tank", "T_2");
    Valve valve = Valve(&container, "V_01", "valve", "V_01", 1.0);

    AdjustValveEvent event = AdjustValveEvent(1000, 50, &valve);

    Simulator simulator = Simulator();
    simulator.schedule_event(&event);
    simulator.run();

    return 0;
}