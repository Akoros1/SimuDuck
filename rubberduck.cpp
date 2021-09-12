#include "rubberduck.h"

RubberDuck::RubberDuck()
{
    quackbehavior = new Squeak();
    flyBehavior = new FlyNoWay();
}


void RubberDuck::display() {
    cout << "Ya resinovaya utka" << endl;
}
