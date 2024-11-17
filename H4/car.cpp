#include "car.h"

Car::Car()
{
    wheel1 = make_unique<Wheel>();
    wheel2 = make_unique<Wheel>();
    wheel3 = make_unique<Wheel>();
    wheel4 = make_unique<Wheel>();
    engine = make_unique<Engine>();
}

Car::Car(string newModel, string newBrand)
{
    wheel1 = make_unique<Wheel>();
    wheel2 = make_unique<Wheel>();
    wheel3 = make_unique<Wheel>();
    wheel4 = make_unique<Wheel>();
    engine = make_unique<Engine>();
    setBrand(newBrand);
    setModel(newModel);
}

void Car::setEngine()
{
    engine->setHorsepower(150);
    engine->setDisplacement(2.0);
}

void Car::setWheels()
{
    wheel1->setSize(17);
    wheel1->setType("kesarengas");
    wheel2->setSize(17);
    wheel2->setType("kesarengas");
    wheel3->setSize(17);
    wheel3->setType("kesarengas");
    wheel4->setSize(17);
    wheel4->setType("kesarengas");
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    cout << "Auto: " << getBrand() << " " << getModel() << endl;
    cout << "Moottori: " << engine->getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << wheel1->getSize() << " tuumaa, " << wheel1->getType() << endl;
    cout << "Rengas 2: " << wheel2->getSize() << " tuumaa, " << wheel2->getType() << endl;
    cout << "Rengas 3: " << wheel3->getSize() << " tuumaa, " << wheel3->getType() << endl;
    cout << "Rengas 4: " << wheel4->getSize() << " tuumaa, " << wheel4->getType() << endl;
}
