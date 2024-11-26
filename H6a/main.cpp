#include <iostream>
#include "myclass.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    MyClass newClass;
    newClass.raiseMySignal();
    return 0;
}
