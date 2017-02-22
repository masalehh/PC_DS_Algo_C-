
/**
    findNthPalindromeNumber.cpp
    Purpose: Solve the book "Programming Contest, Data Structue and Algorithm"

    @author MA Saleh
*/


#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;


enum isPalindrome                                       // enumerator show status of the number palindrome or not
{
    PALINDROME=0,
    NOTPALINDROME=-1
};



isPalindrome checkPalindrome(int value);                // a function to check a number is palindrome or not




/**
---------------------------------
-                               -
- Main program started here     -
-                               -
---------------------------------
*/

int main()
{
    int nth, index, countPalindrome;

    while(true)
    {
        cout << "Enter a number to find nth Palindrome: \n";
        cin >> nth;
        index = 1;
        countPalindrome = 0;

        while (1==1)
        {
            if (checkPalindrome(index) == PALINDROME ) countPalindrome++;

            if(countPalindrome == nth)
            {
                cout << "Nth palindrome number is: " << index << endl;
                break;
            }

            index++;
        }
    }



    return 0;
}

/**
---------------------------------
-                               -
- End of main program           -
-                               -
---------------------------------
*/



/*All Function Body*/

isPalindrome checkPalindrome(int value)                 //function body started
{
    int tempNumber, reverseNumber=0, reminder;
    tempNumber = value;

    while(tempNumber != 0)                              //make the reverse of the given number
    {
        reminder        = tempNumber%10;
        reverseNumber   = reverseNumber*10 + reminder;
        tempNumber      /= 10;
    }

    if(reverseNumber == value) return PALINDROME;       //compare the original number with reversed number

    else return NOTPALINDROME;

}                                                       //end of the function



