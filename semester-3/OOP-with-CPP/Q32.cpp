// Using the concept of operator overloading. Implement a program to overload the 
// following: 
// a. Unary –
// b. Unary ++ preincrement, postincrement
// c. Unary -- predecrement, postdecrement
#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v = 0) : value(v) {}

    // Unary minus
    Number operator-() {
        return Number(-value);
    }

    // Pre-increment
    Number& operator++() {
        ++value;
        return *this;
    }

    // Post-increment
    Number operator++(int) {
        Number temp(*this);
        ++value;
        return temp;
    }

    // Pre-decrement
    Number& operator--() {
        --value;
        return *this;
    }

    // Post-decrement
    Number operator--(int) {
        Number temp(*this);
        --value;
        return temp;
    }

    void display() const {
        cout << value << endl;
    }
};
int main()
{
    Number obj(5);

    cout << "Original value: ";
    obj.display();

    -obj;
    cout << "After unary - : ";
    obj.display();

    ++obj;
    cout << "After pre-increment: ";
    obj.display();

    obj++;
    cout << "After post-increment: ";
    obj.display();

    --obj;
    cout << "After pre-decrement: ";
    obj.display();

    obj--;
    cout << "After post-decrement: ";
    obj.display();

    return 0;
}