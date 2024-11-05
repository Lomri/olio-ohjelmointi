#ifndef DOG_H
#define DOG_H
#include "animal.h"

class Dog : public Animal
{
public:
    Dog() : Animal(){}
    virtual void callOut() override;
};

#endif
