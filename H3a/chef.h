#ifndef CHEF_H
#define CHEF_H

#include <iostream>

using namespace std;

class Chef
{
public:
    Chef(string);
    ~Chef();
    void makeSalad() const;
    void makeSoup() const;
private:
protected:
    string name;
};

#endif
