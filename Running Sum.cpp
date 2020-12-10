#include <iostream>

using namespace std;

int main()
{
    double userInput = 0; // variable for the user to input number
    double sum = 0; // variable to hold the sum
    cout << "This program will calculate the sum of all numbers entered. Enter the number 0 when you wish to exit" << endl;
    do
    {
        cout << "Please enter a number... ";
        cin >> userInput;
        sum = sum + userInput;
        cout << "The current sum is: " << sum << endl << endl;
    } while (userInput != 0);

    cout << "The final sum is: " << sum << endl;
    cout << "Goodbye";
    return 0;
}
