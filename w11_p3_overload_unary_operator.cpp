// Write a C++ program to overload the unary operator.

#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    friend ostream &operator<<(ostream &output, const Student &std);
    friend istream &operator>>(istream &input, Student &std);
    Student &operator++()
    {
        this->age++;
        return *this;
    }
};
ostream &operator<<(ostream &output, const Student &std)
{
    output << "{ name: " << std.name << ", age: " << std.age << " }" << endl;
    return output;
}
istream &operator>>(istream &input, Student &std)
{
    cout << "Enter name: ";
    input >> ws;
    getline(input, std.name);
    cout << "Enter age: ";
    input >> std.age;
    return input;
}

int main()
{
    Student s = Student("John Doe", 23);
    cin >> s;
    cout << s;
    ++s;
    cout << s;
    return 0;
}