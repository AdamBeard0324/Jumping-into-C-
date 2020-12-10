/*
   Program using boolean functions and if/else statements.
   Ask for the age of two people and return which one is older.
   Program warms user if both people are over the age of 100
*/

#include <iostream>

using namespace std;

int main()
{
    int firstAge = 0; // age of first person
    int secondAge = 0; // age of second person

    cout << "Enter the age of the first person" << endl;
    cin >> firstAge;
    cout << "Enter the age of the second person" << endl;
    cin >> secondAge;

    if (firstAge > 100 && secondAge > 100)
    {
        cout << "Both people are over the age of 100.";
    }
    else if (firstAge>secondAge)
    {
        cout << "The first person is older";
    }
    else
    {
        cout << "The second person is older.";
    }
    return 0;
}
