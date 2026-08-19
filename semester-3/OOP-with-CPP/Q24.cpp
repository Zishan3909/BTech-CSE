//A c++ program about constructor.
#include <iostream>
using namespace std;
class abc
{
    int x;
    public:
    abc() // Default constructor
    {
        x = 0;
    }
    abc(int a) // Parameterized constructor
    {
        x = a;
    }
    void display()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    abc a1; // Default constructor called
    abc a2(20); // Parameterized constructor called
    a1.display();
    a2.display();
    return 0;
}