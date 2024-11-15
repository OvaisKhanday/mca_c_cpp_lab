// Write a program in C++ which creates a single-inheritance hierarchy of Person, Employee and Teacher classes and creates instances of each class using new and stores them in an array of Person*

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
class Teacher : private Employee
{
    string subject;
    int totalClassesInDay;

public:
    Teacher(string name, string address, int age, double salary,
            string joiningDate, string subject, int totalClassesInDay) : Employee(name, address, age, salary, "Teacher", joiningDate)
    {
        this->subject = subject;
        this->totalClassesInDay = totalClassesInDay;
        cout << "Hello World: " << this->totalClassesInDay << endl;
    }
    void print()
    {
        cout << "*** Teacher Class ***" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Address: " << this->address << endl;
        cout << "Age: " << this->age << endl;
        cout << "Salary: " << this->salary << endl;
        cout << "Designation: " << this->designation << endl;
        cout << "Joining Date: " << this->joiningDate << endl;
        cout << "Subject: " << this->subject << endl;
        cout << "Total classes in a day: " << this->totalClassesInDay << "\n\n";
    }
};
int main()
{
    Person *persons[3];
    Person *p1 = new Person("Shahnawaz", "Kulgam", 21);
    Person *e1 = (Person *)new Employee("Yawar Abass", "Kulgam", 22, 250000, "Software Engineer", "01/01/2024");
    Person *t1 = (Person *)new Teacher("Ovais Ahmad Khanday", "Anantnag", 23, 150000, "01/05/2025", "ToC", 2);

    persons[0] = p1;
    persons[1] = e1;
    persons[2] = t1;

    persons[0]->print();
    persons[1]->print();
    persons[2]->print();

    Employee e2 = Employee("Yawar Abass", "Kulgam", 22, 250000, "Software Engineer", "01/01/2024");
    Teacher t2 = Teacher("Ovais Ahmad Khanday", "Anantnag", 23, 150000, "01/05/2025", "ToC", 2);
    e2.print();
    t2.print();

    return 0;
}