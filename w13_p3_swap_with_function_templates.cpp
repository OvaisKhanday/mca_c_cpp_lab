//  Write a C++ program to swap data using function templates.

#include <iostream>
using namespace std;

template <class T>
void swap_(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    int ia = 10, ib = 20;
    float fa = 21.05f, fb = 34.09f;
    double da = 123.31, db = 2231.322;
    char ca = 'A', cb = 'B';

    swap_<int>(ia, ib);
    swap_<float>(fa, fb);
    swap_<double>(da, db);
    swap_<char>(ca, cb);

    cout << ia << ", " << ib << endl;
    cout << fa << ", " << fb << endl;
    cout << da << ", " << db << endl;
    cout << ca << ", " << cb << endl;
}