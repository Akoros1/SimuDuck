#include "decoyduck.h"

DecoyDuck::DecoyDuck()
{
    quackbehavior = new MuteQuack();
    flyBehavior = new FlyNoWay();
}

void DecoyDuck::display() {
    cout << "Ya utka-primanka!" << endl;

}
