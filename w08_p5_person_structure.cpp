//  Write a program in C++ to define class Person which having multiple data members for storing the different details of the person e.g. name,age, address, height etc.

#include <iostream>
using namespace std;

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
    Person p1 = {"Ovais Ahmad", 23, "Anantnag", 5.11f};
    Person p2 = Person("Yawar", 23, "Anantnag", 5.11f);
    p1.print();
    p2.print();
    return 0;
}