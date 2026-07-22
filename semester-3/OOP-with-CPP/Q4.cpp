//write a c++ program to demonstrate call by value and call by reference                
#include <iostream>
using namespace std;

void value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Call by Value: " << a << " " << b << endl;
}

void reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Call by Reference: " << a << " " << b << endl;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before: " << x << " " << y << endl;

    value(x, y);
    cout << "After Call by Value: " << x << " " << y << endl;

    reference(x, y);
    cout << "After Call by Reference: " << x << " " << y << endl;

    return 0;
}


