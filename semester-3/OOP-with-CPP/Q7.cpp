#include <iostream>
using namespace std;

int main()
{
    float d = 34.4f;
    long double e= 34.4L;

    // ******** float, double & long double ********

    cout << "Size of 34.4 = " << sizeof(34.4) << endl;
    cout << "Size of 34.4f = " << sizeof(34.4f) << endl;
    cout << "Size of 34.4F = " << sizeof(34.4F) << endl;
    cout << "Size of 34.4L = " << sizeof(34.4L) << endl;
    cout << "Size of 34.4l = " << sizeof(34.4l) << endl;

    // Reference Variable

    float x = 63;
    float &y = x;

    cout << x << endl;
    cout << y << endl;

    // Type Casting

    int z = 36;
    float s = 45.53;

    cout << "Value of z is " << (float)z << endl;
    cout << "Value of s is " << int(s) << endl;

    return 0;
}