
/**
    maxBetween3Numbers.cpp
    Purpose: Solve the book "Programming Contest, Data Structue and Algorithm"

    @author MA Saleh
*/


#include<iostream>
#include<math.h>
#include<iomanip>


using namespace std;


int maximumInteger(int num1, int num2, int num3);               // A function to find the maximum one from three integers




/**
---------------------------------
-                               -
- Main program started here     -
-                               -
---------------------------------
*/

int main()
{

    int num1, num2, num3;

    while(true)
    {
        cout << "Enter three numbers sequentially to find maximum one between them: \n";
        cin >> num1 >> num2 >> num3 ;                               // taking input from user

        cout << "Maximum Number between them is: " << maximumInteger(num1, num2, num3) << endl;
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




int maximumInteger(int num1, int num2, int num3)
{
    if(num1 > num2 && num1 > num3) return num1;     // is num1 bigger or not?

    else if(num2 > num3) return num2;               // num1 is not bigger so compare between remaining two

    else return num3;                               // num1 and num2 is not bigger so num3 is the bigger
}
