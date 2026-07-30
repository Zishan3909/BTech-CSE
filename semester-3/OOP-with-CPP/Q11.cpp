//write a c++ program to calculate area of rectangle, area of square, area of triangle and area of circle using function overloading//
#include<iostream>
using namespace std;

// Area of Rectangle
float area(float length, float breadth)
{
    return length * breadth;
}

// Area of Square
float area(float side)
{
    return side * side;
}

// Area of Triangle
double area(double base, double height)
{
    return 0.5 * base * height;
}

// Area of Circle
double area(double radius)
{
    return 3.14159 * radius * radius;
}

int main()
{
    float length, breadth, side;
    double base, height, radius;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Area of Rectangle = " << area(length, breadth) << endl;
    cout << "Area of Square = " << area(side) << endl;
    cout << "Area of Triangle = " << area(base, height) << endl;
    cout << "Area of Circle = " << area(radius) << endl;

    return 0;
}