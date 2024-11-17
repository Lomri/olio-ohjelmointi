#include "car.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<Car> myCar = make_unique<Car>("Toyota","Corolla");
    myCar->setEngine();
    myCar->setWheels();
    myCar->printDetails();

    return 0;
}
