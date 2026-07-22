#include <iostream>
using namespace std;

int main()
{
    float d = 34.48f;
    long double e = 34.48l;

    cout << "Size of 34.48 = " << sizeof(34.48) << endl;
    cout << "Size of 34.48f = " << sizeof(34.48f) << endl;
    cout << "Size of 34.48l = " << sizeof(34.48l) << endl;

    // Reference variable
    float x = 632;
    float &y = x;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // Type casting
    int z = 36;
    float s = 45.68;

    cout << "z as float = " << (float)z << endl;
    cout << "s as int = " << (int)s << endl;

    return 0;
}