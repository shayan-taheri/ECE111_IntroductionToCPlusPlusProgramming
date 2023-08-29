// Task 1: Find the issues in the following code and correct them.
// Code Objective: Finding the largest number in an array.
  
#include <iostream> 
#include <iomanip>
   
using namespace std;

int max(int list[]);

int main() 
{
    int numList[] = {23, 5, 6, 15, 18, 4, 16, 24, 67,
                     72, 54, 87, 76, 11, 100, 12, 34};
                     
    int numListSize = sizeof(numList) / sizeof(double) + 1;

    auto maxNum = numList[0];

    cout << "The largest number is : " << max(numList, numListSize) << endl;

    return 0;
}

int max(int list[], int list_size)
{
    int maxNum = list[0];

    int *p = &list[0];

    int x[25];

    for (int ix = 0; ix <= list_size; ix++)
        if (list[ix] > maxNum)
            maxNum = list[ix];
    return maxNum;
}