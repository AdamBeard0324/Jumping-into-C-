#include <iostream>
#include <string>

using namespace std;

void add (int x, int y, int z);
void subtract (int x, int y, int z);
void multiply (int x, int y, int z);
void divide (int x, int y, int z);


int main()
{
    string mathSign = "z"; //variable for math sign
    int x=0; // first user number entered
    int y=0; // second user number entered
    int z=0; // number produced by math problem

    cout << "Enter the math problem with a space between each character" << endl;
    cin >> x >> mathSign >> y;
    cout << endl;

    if (mathSign == "+")
    {
        add (x,y,z);
    }

    else if (mathSign == "-")
    {
        subtract (x,y,z);
    }

    else if (mathSign == "*")
    {
        multiply (x,y,z);
    }

    else if (mathSign == "/")
    {
        divide (x,y,z);
    }

    else
    {
        cout << "Invalid input!";
    }

    return 0;
}


void add (int x, int y, int z)
{
        z=x+y;
        cout << x << "+" << y << "=" << z;
}


void subtract (int x, int y, int z)
{
        z=x-y;
        cout << x << "-" << y << "=" << z;
}


void multiply (int x, int y, int z)
{
        z=x*y;
        cout << x << "*" << y << "=" << z;
}


void divide (int x, int y, int z)
{
        if (x==0 || y==0)
        {
            cout << "Cannot divide by a zero!";
        }
        else
        {
            z=x/y;
            cout << x << "/" << y << "=" << z;
        }
}
