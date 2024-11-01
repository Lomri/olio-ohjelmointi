#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car
{
public:
    Car(string, string, int);
    void printData();
    void setBrand(const string &newBrand);

    void setModel(const string &newModel);

    void setYearModel(int newYearModel);

private:
    string brand;
    string model;
    int yearModel;
};

#endif
