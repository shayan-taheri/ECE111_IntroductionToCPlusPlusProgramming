/*
How to have the following formats?

hours = 3.545000e+01, rate = 1.500000e+01, pay = 5.317500e+02, tolerance = 1.000000e-02

hours = 35.450000, rate = 15.000000, pay = 531.750000, tolerance = 0.010000
*/
  
#include <iostream>
   
using namespace std;

int main()  
{  
    double hours = 35.45;
    double rate = 15.00;
    double tolerance = 0.01000;

    cout << "hours = " << hours << ", rate = " << rate
         << ", pay = " << hours * rate
         << ", tolerance = " << tolerance << endl << endl;

    cout << "hours = " << hours << ", rate = " << rate
         << ", pay = " << hours * rate
         << ", tolerance = " << tolerance << endl << endl;

    cout << "hours = " << hours << ", rate = " << rate
         << ", pay = " << hours * rate
         << ", tolerance = " << tolerance << endl << endl;

    return 0;
}



