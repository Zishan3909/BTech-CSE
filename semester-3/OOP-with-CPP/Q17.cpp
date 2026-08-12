//write a program for private member function using c++.
#include <iostream>
using namespace std;

class A {
    int x = 50;
    void run();
public:
    void show();
};

void A::run() {
    cout << "Now value of x: " << x << endl;
}

void A::show() {
    run();
}

int main() {
    A a1;
    a1.show();
    return 0;
}
    