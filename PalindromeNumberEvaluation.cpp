// Program for Palindrome Number Evaluation

#include <iostream>
#include <string> 

using namespace std;

bool isPalindrome(string str); 
  
int main()
{ 
    
	// Complete this section to show the evaluation output.
	
	return 0;
}

bool isPalindrome(string str)
{
    int length = str.length();                   //Step 1

    for (int i = 0; i < (length - 1) / 2; i++)   //Step 2
        if (str[i] != str[length - 1 - i])
            return false;

    return true;
}


