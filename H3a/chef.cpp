#include "chef.h"

Chef::Chef(string newName)
{
    name = newName;
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSalad() const
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup() const
{
    cout << "Chef " << name << " makes soup" << endl;
}
