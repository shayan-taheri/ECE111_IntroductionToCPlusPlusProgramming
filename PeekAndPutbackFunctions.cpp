//Functions peek and putback

#include <iostream>                                 //Line 1
     
using namespace std;                                //Line 2

int main()                                          //Line 3
{                                                   //Line 4
    char ch;                                        //Line 5

    cout << "Line 6: Enter a string: ";             //Line 6
    cin.get(ch);                                    //Line 7
    cout << endl;                                   //Line 8
    cout << "Line 9: After first cin.get(ch); "
         << "ch = " << ch << endl;                  //Line 9
 
    cin.get(ch);                                    //Line 10
    cout << "Line 11: After second cin.get(ch); " 
         << "ch = " << ch << endl;                  //Line 11

    cin.putback(ch);                                //Line 12
    cin.get(ch);                                    //Line 13
    cout << "Line 14: After putback and then " 
         << "cin.get(ch); ch = " << ch << endl;     //Line 14
    
    ch = cin.peek();                                //Line 15
    cout << "Line 16: After cin.peek(); ch = "
         << ch << endl;                             //Line 16

    cin.get(ch);                                    //Line 17
    cout << "Line 18: After cin.get(ch); ch = "
         << ch << endl;                             //Line 18

    return 0;                                       //Line 19
}                                                   //Line 20