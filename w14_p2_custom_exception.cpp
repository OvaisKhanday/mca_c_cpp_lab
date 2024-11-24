// Write a C++ program to create a custom exception.

#include <iostream>
using namespace std;

class MyException : public exception
{
private:
    string message;

public:
    MyException(const char *message)
    {
        this->message = message;
    }
    const char *what() const throw()
    {
        return message.c_str();
    }
};
int main()
{
    try
    {
        // Throw our custom exception
        throw MyException("This is a custom exception");
    }
    catch (MyException &e)
    {
        // Catch and handle our custom exception
        cout << "Caught an exception: " << e.what() << endl;
    }
    return 0;
}