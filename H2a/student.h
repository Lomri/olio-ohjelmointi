#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
    public:
        // Luotu Qt:n Refactor-toiminnolla:
        // Refactor -> Add Getter and Setter
        string getName() const;
        void setName(const string &newName);

        int getStudentNumber() const;
        void setStudentNumber(int newStudentNumber);

        double getAverage() const;
        void setAverage(double newAverage);

    private:
        string name;
        int studentNumber;
        double average;
};

#endif
