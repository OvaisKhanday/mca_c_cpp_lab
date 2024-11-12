// Write a program in C++ which creates objects of Student class using default, overloaded and copy constructors.

#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person()
    {
        age = 18;
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Person(Person &p)
    {
        this->age = p.age;
        this->name = p.name;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{

    Person p1;                       // default constructor
    Person p2 = {"Ovais Ahmad", 23}; // parametrized
    Person *p3 = new Person(p2);     // copy

    p1.print();
    p2.print();
    p3->print();
    return 0;
}