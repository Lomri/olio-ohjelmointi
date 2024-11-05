#include <iostream>
#include "animal.h"
#include "dog.h"


using namespace std;

int main()
{
    Animal *myAnimal = new Animal;
    myAnimal->callOut(); // Tulostaa "Elain aantelee."

    Dog *myDog = new Dog;
    myDog->callOut(); // Tulostaa "Koira haukkuu!"

    delete myAnimal;
    myAnimal = nullptr;

    delete myDog;
    myDog = nullptr;
}
