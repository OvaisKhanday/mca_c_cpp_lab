// Define a class with appropriate data members and member functions which opens an input and output file, checks each one for being open, and then reads name, age, salary of a person from the input file and stores the information in an object, increases the salary by a bonus of 10% and then writes the person object to the output file. It continues until the input stream is no longer good.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;

class Person
{
    char name[50];
    int age;
    float salary;

public:
    Person(char *name = "", int age = 0, float salary = 0.0f)
    {
        strcpy(this->name, name);
        this->age = age;
        this->salary = salary;
    }
    friend ostream &operator<<(ostream &, const Person &);
    Person &bonusSalary()
    {
        this->salary += (this->salary * 0.1);
        return *this;
    }
};
ostream &operator<<(ostream &output, const Person &person)
{
    output << "name: " << person.name << ", age: " << person.age << ", salary: " << person.salary;
    return output;
}

class Bonus
{
    ofstream outFile;
    ifstream inFile;
    string inFileName;
    string outFileName;

public:
    Bonus(string in, string out)
    {
        this->inFileName = in;
        this->outFileName = out;
        this->inFile.open(in, ios::in | ios::binary);
        this->outFile.open(out, ios::out | ios::binary);
        if (!this->inFile || !this->outFile)
        {
            cerr << "Error opening files" << endl;
            exit(0);
        }
    }

    ~Bonus()
    {
        if (this->inFile.is_open())
            this->inFile.close();
        if (this->outFile.is_open())
            this->outFile.close();
    }

    Person &readPerson()
    {
        Person *p = new Person();
        inFile.read((char *)p, sizeof(Person));
        return *p;
    }

    void writePerson(Person &p)
    {
        outFile.write((char *)&p, sizeof(Person));
    }

    void generateBonus()
    {
        inFile.seekg(0, ios::beg);
        outFile.seekp(0, ios::beg);
        while (!inFile.eof())
        {
            Person p = this->readPerson();
            p.bonusSalary();
            writePerson(p);
        }
        inFile.seekg(0, ios::beg);
        outFile.seekp(0, ios::beg);
    }
};

void printFile(ifstream &fp)
{
    fp.seekg(0, ios::beg);
    while (!fp.eof())
    {
        Person p;
        fp.read((char *)&p, sizeof(Person));
        cout << p << endl;
    }
    fp.seekg(0, ios::beg);
}

int main()
{
    Person p1 = Person("William Blake", 40, 100.0f);
    Person p2 = Person("George Orwell", 57, 250.1f);
    Person p3 = Person("William Wordsworth", 60, 120.3f);

    ofstream out;
    out.open("write.dat", ios::out | ios::binary);
    out.write((char *)&p1, sizeof(Person));
    out.write((char *)&p2, sizeof(Person));
    out.write((char *)&p3, sizeof(Person));
    out.seekp(0, fstream::beg);
    out.close();

    ifstream basicFile;
    basicFile.open("write.dat");
    if (!basicFile)
        return -1;
    printFile(basicFile);
    basicFile.seekg(0, fstream::beg);
    basicFile.close();

    Bonus *b = new Bonus("write.dat", "bonus.dat");
    b->generateBonus();
    delete b;

    ifstream bonusFile;
    bonusFile.open("bonus.dat");
    if (!bonusFile)
        return -1;
    printFile(bonusFile);
    bonusFile.close();

    return 0;
}