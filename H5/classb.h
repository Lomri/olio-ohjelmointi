#ifndef CLASSB_H
#define CLASSB_H

#include <iostream>
using namespace std;

class ClassB
{
public:
    ClassB();
    string getInfo() const;
    void setInfo(const string &newInfo);

private:
    string info;
};

#endif
