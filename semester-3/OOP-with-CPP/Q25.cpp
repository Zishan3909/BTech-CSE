//multiple constructor in a class
#include <iostream>
using namespace std;

class integer1
{
    int n,m;
public:
    integer1() // Default constructor
    {
        n = 0;
        m = 0;
    }
   
    integer1(int a, int b) // Parameterized constructor with two parameters
    {
        n = a;
        m = b;
    }
    integer1(const integer1 &i) // Copy constructor
    {
        n = i.n;
        m = i.m;
    }
    void display()
    {
        cout << "n = " << n << ", m = " << m << endl;
    }
};

int main()
{
    integer1 i1; // Default constructor called
    integer1 i2(20, 30); // Parameterized constructor called
    integer1 i3(i2); // Copy constructor called

    i1.display();
    i2.display();
    i3.display();

    return 0;
}
