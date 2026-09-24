// Write a c++ program to overload greater than function using friend function.
#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    
    // Friend function to overload > operator
    friend bool operator>(const Number& n1, const Number& n2) {
        return n1.value > n2.value;
    }
};

int main() {
    Number num1(10);
    Number num2(20);

    if (num1 > num2) {
        cout << "num1 is greater than num2" << endl;
    } else {
        cout << "num2 is greater than num1" << endl;
    }

    return 0;
}