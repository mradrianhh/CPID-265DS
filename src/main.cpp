#include <iostream>
#include "components/Component.h"
#include "components/Container.h"
#include "components/Actuator.h"
#include "components/Controller.h"
#include "components/Valve.h"
#include "components/Sensor.h"
#include "components/LT_265DS.h"

using namespace std;

int main()
{
    Component c = Component("LT_01", "Level transmitter", "sensor", "LT_01");
    c.print_information();

    Container con = Container("T_1", "Fluid tank", "T_1");
    con.print_information();

    Actuator actuator = Actuator(&con, "A_01", "Actuator", "A_01");
    actuator.print_information();

    Controller controller = Controller("C_01", "Controller", "C_01");
    controller.print_information();

    LT_265DS lt = LT_265DS(&con, "LT_01", "Differential pressure sensor", "LT_01");
    lt.print_information();

    Valve valve = Valve(&con, actuator, 10);
    valve.print_information();

    Sensor sensor = Sensor(&con, "S_01", "Sensor", "S_01");
    sensor.print_information();

    return 0;
}