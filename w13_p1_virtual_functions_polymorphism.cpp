// Write a C++ program to demonstrate the use of virtual functions and polymorphism?
#include <iostream>
using namespace std;

class Shape
{
    string name;
    string color;

public:
    Shape(string name, string color)
    {
        this->name = name;
        this->color = color;
    }
    virtual float getArea() = 0;
    virtual float getPerimeter() = 0;
    virtual void printShapeDetails() = 0;
    void print()
    {
        cout << "\nPrinting Shape Details" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Color: " << this->color << endl;
        this->printShapeDetails();
        cout << "Area: " << this->getArea() << endl;
        cout << "Perimeter: " << this->getPerimeter() << endl;
    }
    string getName()
    {
        return this->name;
    }
    string getColor()
    {
        return this->color;
    }
    void setColor(string color)
    {
        this->color = color;
    }
};

class Rectangle : public Shape
{
    float length, width;

public:
    Rectangle(string color, float length, float width) : Shape("Rectangle", color)
    {
        this->length = length;
        this->width = width;
    }
    float getArea()
    {
        return this->length * this->width;
    }
    float getPerimeter()
    {
        return 0.5 * this->length * this->width;
    }
    void printShapeDetails()
    {
        cout << "Length: " << this->length << endl;
        cout << "Width: " << this->width << endl;
    }
};

class Circle : public Shape
{
    float radius;

public:
    Circle(string color, float radius) : Shape("Circle", color)
    {
        this->radius = radius;
    }
    float getArea()
    {
        return 3.14 * this->radius * this->radius;
    }
    float getPerimeter()
    {
        return 3.14 * 2 * this->radius;
    }
    void printShapeDetails()
    {
        cout << "Radius: " << this->radius << endl;
    }
};

int main()
{

    Shape *rect = new Rectangle("Red", 22, 33);
    Shape *circ = new Circle("Blue", 43);

    rect->print();
    circ->print();

    return 0;
}