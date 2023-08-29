// Program illustrating how a value parameter works.
  
#include <iostream>                                 //Line 1

using namespace std;                                //Line 2

void funcValueParam(int num);                       //Line 3

int main()                                          //Line 4
{                                                   //Line 5
    int number = 6;                                 //Line 6

    cout << "Line 7: Before calling the function "
         << "funcValueParam, number = " << number
         << endl;                                   //Line 7

    funcValueParam(number);                         //Line 8

    cout << "Line 9: After calling the function "
         << "funcValueParam, number = " << number
         << endl;                                   //Line 9

    return 0;                                       //Line 10
}                                                   //Line 11

void funcValueParam(int num)                        //Line 12
{                                                   //Line 13
    cout << "Line 14: In the function funcValueParam, "
         << "before changing, num = " << num
         << endl;                                   //Line 14

    num = 15;                                       //Line 15

    cout << "Line 16: In the function funcValueParam, "
         << "after changing, num = " << num
         << endl;                                   //Line 16
}                                                   //Line 17
