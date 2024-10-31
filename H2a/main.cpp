#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    //
    // Vaihe 1: Car-luokka
    //

    // Luodaan olio pinomuistiin (stack)
    Car myNewCar;

    // Asetetaan autolle tiedot
    myNewCar.setBrand("BMW");
    myNewCar.setModel("530e");
    myNewCar.setYearModel(2021);

    // Tulostetaan auton tiedot
    myNewCar.printData();


    //
    // Vaihe 2: Rectangle-luokka
    //

    // Luodaan olio kekomuistiin (heap)
    Rectangle *myNewRectangle = new Rectangle;

    // Asetetaan korkeus ja leveys
    myNewRectangle->setHeight(10);
    myNewRectangle->setWidth(10);

    // Tulostetaan suorakulmion pinta-ala ja ympärysmitta
    double area = myNewRectangle->getArea();
    double circum = myNewRectangle->getCircum();

    cout << "Pinta-ala: " << area << endl;
    cout << "Ymparysmitta: " << circum << endl;

    // Tuhotaan olio
    delete myNewRectangle;
    myNewRectangle = nullptr;


    //
    // Vaihe 3: Student-luokka
    //

    // Luodaan olio smart pointerilla
    unique_ptr<Student> myNewStudent = make_unique<Student>();

    // Asetetaan nimi, opiskelijanumero ja keskiarvo
    myNewStudent->setName("Teppo");
    myNewStudent->setStudentNumber(12895353);
    myNewStudent->setAverage(4.8);

    // Tulostetaan tiedot
    string name = myNewStudent->getName();
    int studentNumber = myNewStudent->getStudentNumber();
    double average = myNewStudent->getAverage();

    cout << "Nimi: " << name << endl;
    cout << "Opiskelijanumero: " << studentNumber << endl;
    cout << "Keskiarvo: " << average << endl;
}
