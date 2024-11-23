// Write a C++ program to create a simple calculator which can add, subtract, multiply and divide two numbers using class template.

#include <iostream>
using namespace std;

template <class T>
class Calc
{
    T op1, op2;

public:
    Calc(T x, T y)
    {
        this->op1 = x;
        this->op2 = y;
    }

    T add()
    {
        return this->op1 + this->op2;
    }
    T sub()
    {
        return this->op1 - this->op2;
    }
    T mul()
    {
        return this->op1 * this->op2;
    }
    T div()
    {
        if (this->op2 == 0)
            throw runtime_error("Division by zero is not allowed!");
        return this->op1 / this->op2;
    }
    void print()
    {
        cout << "\noperands: [" << op1 << ", " << op2 << "]" << endl;
        cout << "add: " << add() << endl;
        cout << "sub: " << sub() << endl;
        cout << "mul: " << mul() << endl;
        cout << "div: " << div() << endl;
    }
};

int main()
{
    Calc<int> ic = Calc<int>(10, 20);
    Calc<float> fc = Calc<float>(20.09f, 20.32f);
    Calc<double> dc = Calc<double>(10.324, 120.431);

    ic.print();
    fc.print();
    dc.print();

    return 0;
}