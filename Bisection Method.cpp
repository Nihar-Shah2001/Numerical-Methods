// Bisection Method.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
#include<time.h>
using namespace std;
long double f (long double x)
{
    long double f;
    f = pow(x,2) - (3*x);
    return(f);
}
int main()
{
    std::cout << "Hello World!\n";
    long double a, b, error,c,newvalue;
    cout << "Please enter the Error limit: ";
    cin >> error;
    cout << "Enter the initial lower range value: ";
    cin >> a;
    cout << "Enter the initial upper range value: ";
    cin >> b;
    while (f(a) * f(b) > 0)
    {
        cout << "Error: Please enter other values of a and b: \n";
        cout << "Enter the initial lower range value: ";
        cin >> a;
        cout << "Enter the initial upper range value: ";
        cin >> b;
    }
    if (a > b)
    {
        long double temp;
        temp = a;
        a = b;
        b = temp;
    }
    int i = 0;
    cout << "\n\nWe find the intervals first: ";
    cout << "\n x = " << a << " Hence, f(" << a << ") = " << f(a);
    cout << "\n x = " << b << " Hence, f(" << b << ") = " << f(b);
    cout << "\n Now we do Iterations for Bisection Method: ";
    cout << "\n\n\t i \t a \t b \t xi \t f(xi)\n";
    do
    {
        i++;
        c = (a + b) / 2;
        cout <<"\n \t "<<i<<" \t "<< a << " \t " << b << " \t x"<<i<<" = (a+b)/2 = "<< c << " \t f(x"<< i <<") = "<< f(c) << "\n";
        if (f(c) == 0)
        {
            newvalue = c;
            break;
        }
        if (f(c) * f(b) < 0)
        {
            a = c;
        }
        else b = c;
        newvalue = (a+b)/2;
    } while (abs(newvalue - c) >= error);
    cout << "\n\n\tThe root of the equation is: " << newvalue;
    cout << "\n therefore, x = " << newvalue << " is one of the approximate real root of the given equation correct upto " << error << " decimal places. ";
    cout << "\n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
