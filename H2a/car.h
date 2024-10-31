#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car
{
    public:
        Car();
        void printData();
        void setBrand(string);
        void setModel(string);
        void setYearModel(int);

    private:
        string brand;
        string model;
        int yearModel;
};

#endif
