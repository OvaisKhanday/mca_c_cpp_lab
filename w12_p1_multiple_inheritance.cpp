// Write a program in C++ which creates a multiple-inheritance hierarchy of Teacher classes derived from both Person, Employee classes. Each class must implement a Show() member function and utilize scope-resolution operator

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void show();
};
class Employee
{
protected:
    float salary;
    string jobDescription;

public:
    Employee(float salary, string jobDescription)
    {
        this->jobDescription = jobDescription;
        this->salary = salary;
    }
    void show();
};

class Teacher : public Person, public Employee
{
    string school;

public:
    Teacher(string name, int age, float salary, string school) : Person(name, age), Employee(salary, "Teacher")
    {
        this->school = school;
    }
    void show();
};
void Person::show()
{
    cout << "\nPerson Class" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
}
void Employee::show()
{
    cout << "\nEmployee Class" << endl;
    cout << "Salary: " << this->salary << endl;
    cout << "Job: " << this->jobDescription << endl;
}
void Teacher::show()
{
    cout << "\nTeacher Class" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "Salary: " << this->salary << endl;
    cout << "Job: " << this->jobDescription << endl;
    cout << "School: " << this->school << endl;
}

int main()
{
    Person p = Person("Robert Frost", 45);
    Employee e = Employee(334443.003f, "Writer");
    Teacher t = Teacher("John Doe", 30, 235634.0f, "ABC School");
    p.show();
    e.show();
    t.show();
    return 0;
}