#ifndef WHEEL_H
#define WHEEL_H

#include <iostream>

using namespace std;

class Wheel
{
public:
    Wheel();
    Wheel(int,string);
    int getSize() const;
    void setSize(int newSize);

    string getType() const;
    void setType(const string &newType);

private:
    int size;
    string type;
};

#endif
