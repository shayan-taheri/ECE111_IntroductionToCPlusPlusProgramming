
/* Sample Results:
87 78 83 94 sum = 342
23 89 92 70 sum = 274
92 78 34 56 sum = 260
*/

#include <iostream>
#include <fstream>

using namespace std;
 
int main()
{
    ifstream infile;

    int i;      
    int j;
    int sum;
    int num;

    infile.open("LopWithBgsData.txt");

    for (i = 1; i <= 4; i++)
    {
        sum = 0;

		infile >> num;
		cout << num << " ";
		sum = sum + num;
        
        cout << "sum = " << sum << endl;
    }

    return 0;
 }
