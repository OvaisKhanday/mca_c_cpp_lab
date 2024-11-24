// Write a C++ program to demonstrate the concept of exception handling.

#include <iostream>
using namespace std;

float division(float x, float y)
{
    if (y == 0)
        throw runtime_error("Division by 0 not allowed");
    return x / y;
}

int main()
{

    try
    {
        cout << (division(12.09, 0)) << endl;
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}