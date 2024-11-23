// Write a C++ program to demonstrate the use of pure virtual functions and virtual destructors?

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
    virtual ~Shape()
    {
        cout << "Shape destructor called" << endl;
    }
};
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing rectangle" << endl;
    }
    ~Rectangle()
    {
        cout << "Rectangle destructor called" << endl;
    }
};

int main()
{
    Shape *s = new Rectangle();
    s->draw();

    delete s;
    return 0;
}