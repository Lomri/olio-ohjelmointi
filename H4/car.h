#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"

#include <iostream>
#include <memory>

using namespace std;

class Car
{
public:
    Car();
    Car(string, string);
    void setEngine();
    void setWheels();
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
    void printDetails();

private:
    string model;
    string brand;
    unique_ptr<Engine> engine;
    unique_ptr<Wheel> wheel1;
    unique_ptr<Wheel> wheel2;
    unique_ptr<Wheel> wheel3;
    unique_ptr<Wheel> wheel4;
};

#endif
