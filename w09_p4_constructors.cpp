// Write a program in C++ which creates objects of Student class using default, overloaded and copy constructors.

#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    float marks;

public:
    Student()
    {
        age = 18;
        marks = 33.0f;
    }
    Student(string name, int age, float marks)
    {
        this->name = name;
        this->age = age;
        this->marks = marks;
    }
    Student(Student &p)
    {
        this->age = p.age;
        this->name = p.name;
        this->marks = p.marks;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{

    Student s1;                              // default constructor
    Student s2 = {"Ovais Ahmad", 23, 90.0f}; // parametrized
    Student *s3 = new Student(s2);           // copy

    s1.print();
    s2.print();
    s3->print();
    return 0;
}