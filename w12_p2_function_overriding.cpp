// Write a program in C++ demonstrates the concept of function overriding?

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    string address;
    int age;

public:
    Person(string name, string address, int age)
    {
        this->name = name;
        this->address = address;
        this->age = age;
    }
    void print()
    {
        cout << "*** Person Class ***" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Address: " << this->address << endl;
        cout << "Age: " << this->age << "\n\n";
    }
};
class Employee : protected Person
{
protected:
    double salary;
    string designation;
    string joiningDate;

public:
    Employee(string name, string address, int age, double salary,
             string designation, string joiningDate) : Person(name, address, age)
    {
        this->salary = salary;
        this->designation = designation;
        this->joiningDate = joiningDate;
    }
    void print()
    {
        cout << "*** Employee Class ***" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Address: " << this->address << endl;
        cout << "Age: " << this->age << endl;
        cout << "Salary: " << this->salary << endl;
        cout << "Designation: " << this->designation << endl;
        cout << "Joining Date: " << this->joiningDate << "\n\n";
    }
};

int main()
{

    Person p = Person("Ovais", "Anantnag", 23);
    Employee e = Employee("Rafaqat", "Anantnag", 23, 243000, "Teacher", "01/12/2023");

    p.print();
    e.print();
    return 0;
}