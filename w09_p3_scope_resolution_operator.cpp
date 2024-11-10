// Write a C++ program to demonstrate the use of scope resolution operator?

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
    float getReal();
    float getImg();
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
float Complex::getReal()
{
    return real;
}

float Complex::getImg()
{
    return img;
}

int main()
{
    Complex c = {10, 12.5f};
    c.print();

    c.setReal(20.06f);
    cout << "The img part is: " << c.getImg() << endl;
    c.print();
    return 0;
}