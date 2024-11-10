// Write a program to instantiate the objects of the class person and class complex ?

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
    void print()
    {
        cout << "----------------" << endl;
        cout << "real: " << real << endl;
        cout << "img: " << img << endl;
    }
};
class Person
{
    string name;
    int age;
    string address;
    float height;

public:
    Person(string n, int a, string ad, float h)
    {
        name = n;
        age = a;
        address = ad;
        height = h;
    }

    void print()
    {
        cout << "------------------------" << endl;
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "address: " << address << endl;
        cout << "height: " << height << endl;
    }
};

int main()
{
    Complex c = Complex(10.0f, 12.0f);
    Person p = Person("Ovais Ahmad", 23, "Anantnag", 5.11);
    c.print();
    p.print();
    return 0;
}