#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    // Luodaan vektori nimeltä carList
    vector<Car> carList;

    // Luodaan kolme Car-luokan oliota
    Car car1("BMW","530e",2021);
    Car car2("Honda","Accord",1995);
    Car car3("Ford","Escort",1990);

    // Lisätään oliot listaan
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    // Tulostetaan listan toisen alkion tiedot
    carList[1].printData();

    // Tulostetaan kaikkien autojen tiedot for-silmukalla
    for(int i = 0; i < 3; i++)
    {
        carList[i].printData();
    }
}
