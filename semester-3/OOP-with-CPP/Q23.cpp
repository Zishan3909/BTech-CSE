// Program to demonstrate function overloading (compile-time polymorphism)
#include<iostream>
using namespace std;

class Area
{
public:
    double calculateArea(double side)
    {
        return side * side;
    }

    double calculateArea(double length, double width)
    {
        return length * width;
    }

    double calculateArea(double base, double height, char type)
    {
        if (type == 'T' || type == 't')
            return 0.5 * base * height;
        return 0.0;
    }
};

int main()
{
    Area obj;

    cout << "Area of square: " << obj.calculateArea(5.0) << endl;
    cout << "Area of rectangle: " << obj.calculateArea(4.0, 6.0) << endl;
    cout << "Area of triangle: " << obj.calculateArea(5.0, 8.0, 'T') << endl;

    return 0;
}