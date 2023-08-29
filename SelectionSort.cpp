// Implementation of Selection Sort Algorithm

#include <iostream>                                 //Line 1

using namespace std;                                //Line 2

void selectionSort(int list[],  int length);        //Line 3

int main()                                          //Line 4
{                                                   //Line 5
    int list[] = {2, 56, 34, 25, 73, 46, 89, 
                  10, 5, 16};                       //Line 6

    int i;                                          //Line 7

    selectionSort(list, 10);                        //Line 8

    cout << "After sorting, the list elements are:" 
         << endl;                                   //Line 9

    for (i = 0; i < 10; i++)                        //Line 10
        cout << list[i] << " ";                     //Line 11

    cout << endl;                                   //Line 12

    return 0;                                       //Line 13
}                                                   //Line 14

void selectionSort(int list[], int length)
{
    int index;
    int smallestIndex;
    int location;
    int temp;

    for (index = 0; index < length - 1; index++)
    {
        //Step a
        smallestIndex = index; 

        for (location = index + 1; location < length; location++)
            if (list[location] < list[smallestIndex])
                smallestIndex = location; 

        //Step b
        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        list[index] = temp;
    }
}


