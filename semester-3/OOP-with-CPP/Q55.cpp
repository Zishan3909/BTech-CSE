//Write a c++ program to calculate area of circle, rectangle, square and triangle using template.
#include <iostream>
using namespace std;

template <class T>
T area(T a, T b = 0) {
    if (b == 0) {
        return 3.14159 * a * a; // Area of circle
    } else {
        return a * b; // Area of rectangle or square
    }
}

int main() {
    double radius, length, width, side, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << area(length, width) << endl;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << area(side) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << (0.5 * area(base, height)) << endl;

    return 0;
}