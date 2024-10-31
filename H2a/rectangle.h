#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle
{
    public:
        Rectangle();
        double getArea();
        double getCircum();
        void setWidth(double);
        void setHeight(double);

    private:
        double width;
        double height;
};

#endif
