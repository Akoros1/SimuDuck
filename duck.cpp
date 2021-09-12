#include "duck.h"

void Duck::PerformFly() {
     flyBehavior->fly();

}

void Duck::PerformQuack() {
     quackbehavior->quack();

}



void Duck::swim() {
    cout << "Vse utki plavayut, dazhe utki-primanki!" << endl;
}

