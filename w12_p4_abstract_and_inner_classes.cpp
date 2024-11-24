// Write a C++ program to demonstrate the concepts of abstract class and inner class?

#include <iostream>
#include <string>
using namespace std;

class AbstractClass
{
public:
    virtual void display() const = 0;
    virtual ~AbstractClass() {}
};

class ConcreteClass : public AbstractClass
{
private:
    string name;

    class InnerClass
    {
    public:
        void printMessage() const
        {
            cout << "This is a message from the Inner Class.\n";
        }
    };

public:
    ConcreteClass(const string &n) : name(n) {}

    void display() const override
    {
        cout << "ConcreteClass name: " << name << endl;

        InnerClass inner;
        inner.printMessage();
    }
};

int main()
{
    AbstractClass *obj = new ConcreteClass("ExampleClass");
    obj->display();

    delete obj;

    return 0;
}
