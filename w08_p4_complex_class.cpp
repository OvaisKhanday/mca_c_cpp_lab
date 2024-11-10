//  Write a program in C++ to define class complex which having two data members viz real and imaginary part ?

#include <iostream>
using namespace std;

class Complex
{
    float real;
    float img;

public:
    Complex(float r, float i)
    {
        real = r;
        img = i;
    }
    void print();
    void setReal(float);
    void setImg(float);
};
void Complex::print()
{
    cout << "----------------" << endl;
    cout << "real: " << real << endl;
    cout << "img: " << img << endl;
}
void Complex::setReal(float real)
{
    this->real = real;
}
void Complex::setImg(float img)
{
    (*this).img = img;
}

int main()
{
    Complex c1 = Complex(29, 30);
    Complex c2 = {10, 12.5f};
    Complex *c3 = new Complex(11, 22.011f);

    c1.print();
    c2.print();
    c3->print();

    c1.setReal(20.06f);
    c2.setImg(90.790f);
    c3->setReal(80.90f);
    c1.print();
    c2.print();
    c3->print();
    return 0;
}