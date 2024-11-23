// Write a C++ program to show inheritance using different levels?

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Teacher : virtual public Person
{
public:
    float salary;

    Teacher(string n, int a, float s) : Person(n, a)
    {
        salary = s;
    }
};

class Student : virtual public Person
{
public:
    string course;
    Student(string n, int a, string c) : Person(n, a)
    {
        course = c;
    }
};

class Researcher : public Teacher, public Student
{
public:
    Researcher(string n, int a, float s, string c) : Teacher(n, a, s), Student(n, a, c), Person(n, a) {};
    friend ostream &operator<<(ostream &, const Researcher &);
};

ostream &operator<<(ostream &output, const Researcher &r)
{
    output << "name: " << r.name << ", age: " << r.age << ", course: " << r.course << ", salary: " << r.salary << endl;
    return output;
}

int main()
{
    Researcher r = Researcher("Zaamin Gulzar", 28, 234000.0f, "English Lit");
    cout << r;
    return 0;
}