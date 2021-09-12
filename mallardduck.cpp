#include "mallardduck.h"

MallardDuck::MallardDuck()
{
    quackbehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

void MallardDuck::display() {
    cout << "Ya dikaya utka" << endl;
}
