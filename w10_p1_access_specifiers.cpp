// Write a program to demonstrate the use of different access specifiers.

#include <iostream>
using namespace std;

class Person
{

protected:
    string name;
    int age;
    string phoneNo;

public:
    Person(string name, int age, string phoneNo)
    {
        this->name = name;
        this->age = age;
        this->phoneNo = phoneNo;
    }
};
class Student : private Person
{
private:
    int rollNo;
    float marks;

public:
    Student(string name, int age, string phoneNo, int rollNo, float marks) : Person(name, age, phoneNo)
    {
        this->rollNo = rollNo;
        this->marks = marks;
    }
    void print()
    {
        cout << "Student Details" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Phone No: " << this->phoneNo << endl;
        cout << "Roll No: " << this->rollNo << endl;
        cout << "Marks: " << this->marks << endl;
    }
};

int main()
{
    Student std = Student("Ovais Ahmad Khanday", 23, "7654321234", 1, 43.01f);
    std.print();

    return 0;
}