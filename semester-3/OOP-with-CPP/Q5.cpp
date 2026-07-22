// Write a C++ program to use all operators in C++

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;
    cout << "Modulus = " << a % b << endl;

    // Relational Operators
    cout << "a > b = " << (a > b) << endl;
    cout << "a == b = " << (a == b) << endl;

    // Logical Operators
    cout << "(a > b && b > 0) = " << (a > b && b > 0) << endl;
    cout << "(a < b || b > 0) = " << (a < b || b > 0) << endl;

    // Assignment Operator
    a += 5;
    cout << "a after += 5 = " << a << endl;

    // Increment and Decrement
    a++;
    b--;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}