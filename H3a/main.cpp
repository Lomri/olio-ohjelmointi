#include <iostream>
#include "chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    Chef gordon("Gordon Ramsay");
    gordon.makeSalad();
    gordon.makeSoup();

    ItalianChef italian("Anthony Bourdain");
    italian.makeSalad();
    italian.makeSoup();
    italian.makePasta();
    cout << "Name of the Italian Chef is " << italian.getName() << endl;
}
