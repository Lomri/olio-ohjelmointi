#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string newName) : Chef(newName)
    {
        cout << "ItalianChef " << newName << " konstruktori" << endl;
    }
    ~ItalianChef();
    string getName() const;
    void makePasta() const;
};

#endif
