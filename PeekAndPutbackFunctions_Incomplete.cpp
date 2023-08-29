/*
Enter a string: This is a test.

Desired Sequence:
ch = T
ch = h
ch = h
ch = i
ch = i
*/


#include <iostream>                                 //Line 1
     
using namespace std;                                //Line 2

int main()                                          //Line 3
{                                                   //Line 4
    char ch;                                        //Line 5

    cout << "Enter a string: ";             //Line 6
    cin.get(ch);                                    //Line 7
    cout << endl;                                   //Line 8
    cout << "Then "
         << "ch = " << ch << endl;                  //Line 9
 
    cin.putback(ch);                                    //Line 10
    cout << "Then " 
         << "ch = " << ch << endl;                  //Line 11

    cin.get(ch);                                //Line 12
    cin.get(ch);                                    //Line 13
    cout << "Then " 
         << "ch = " << ch << endl;     //Line 14
    
    ch = cin.get();                                //Line 15
    cout << "Then ch = "
         << ch << endl;                             //Line 16

    cin.putback(ch);                                    //Line 17
    cout << "Then ch = "
         << ch << endl;                             //Line 18

    return 0;                                       //Line 19
}                                                   //Line 20