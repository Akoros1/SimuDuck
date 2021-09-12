#include "modelduck.h"

ModelDuck::ModelDuck()
{
    quackbehavior = new Quack();
    flyBehavior = new FlyRocketPowered();
}

void ModelDuck::display() {
    cout << "Ya modelnaya utka" << endl;
}

