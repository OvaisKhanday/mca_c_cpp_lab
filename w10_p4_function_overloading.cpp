// Write a program in C++ demonstrates the use of function overloading.

#include <iostream>
using namespace std;

int sum(int x, int y)
{
    cout << "sum(int, int) called" << endl;
    return x + y;
}

float sum(float x, float y)
{
    cout << "sum(float, float) called" << endl;
    return x + y;
}

double sum(double x, double y)
{
    cout << "sum(double, double) called" << endl;
    return x + y;
}

int main()
{

    cout << sum(2, 4) << endl;
    cout << sum(232.09f, 32.32f) << endl;
    cout << sum(2032.4233233, 4.23232023) << endl;
    return 0;
}