// Write a C++ program to demonstrate the use of inline, friend functions and this keyword.

#include <iostream>
using namespace std;

inline int square(int x) { return x * x; }

class Student
{
    string name;
    int age;

public:
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    friend int getAge(Student &);
};

int getAge(Student &std)
{
    return std.age;
}
int main()
{

    Student s = Student("ABC", 19);

    cout << getAge(s) << endl;
    cout << square(getAge(s)) << endl;

    return 0;
}