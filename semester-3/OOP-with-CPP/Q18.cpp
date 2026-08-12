//write a c++ program for static data member.
#include <iostream>
using namespace std;

class Myclass {
public:
    int x;
    static int count;  // declaration

    Myclass() {         // default constructor
        count++;
    }
};

int Myclass::count;     // automatic initialization to 0

int main() {
    cout << "Initial Count" << Myclass::count << endl;  // access by class also

    Myclass obj1;

    cout << "Count after one object" << Myclass::count;

    return 0;
}