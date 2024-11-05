#include "ItalianChef.h"

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << Chef::name << " destruktori" << endl;
}

string ItalianChef::getName() const
{
    return Chef::name;
}

void ItalianChef::makePasta() const
{
    cout << "ItalianChef " << Chef::name << " makes pasta" << endl;
}
