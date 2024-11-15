// Write a C++ program to show the use of destructors.

#include <iostream>
using namespace std;

class Stack
{
    int *stack;
    int size;
    int capacity;

public:
    Stack()
    {
        this->capacity = 10;
        this->size = 0;
        this->stack = new int[this->capacity];
    }
    ~Stack()
    {
        delete[] stack;
        cout << "Destructor called" << endl;
    }
    Stack(int capacity)
    {
        this->size = 0;
        this->capacity = capacity;
        this->stack = new int[this->capacity];
    }

    bool isEmpty()
    {
        return size == 0;
    }
    bool isFull()
    {
        return size == capacity;
    }
    bool push(int num)
    {
        if (this->isFull())
            return false;
        this->stack[size++] = num;
        return true;
    }
    int pop()
    {
        if (this->isEmpty())
            return -1;
        return this->stack[--size];
    }
    int top()
    {
        if (this->isEmpty())
            return -1;
        return this->stack[size - 1];
    }
};
int main()
{
    Stack stack = {5};
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;

    return 0;
}