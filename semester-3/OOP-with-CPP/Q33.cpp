// Using the concept of operator overloading. Implement a program to overload the 
// following: 
// With the help of friend function:
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

    // Friend function for unary minus
    friend Number operator-(const Number& obj) {
        return Number(-obj.value);
    }

    // Friend function for pre-increment
    friend Number& operator++(Number& obj) {
        ++obj.value;
        return obj;
    }

    // Friend function for post-increment
    friend Number operator++(Number& obj, int) {
        Number temp(obj);
        ++obj.value;
        return temp;
    }

    // Friend function for pre-decrement
    friend Number& operator--(Number& obj) {
        --obj.value;
        return obj;
    }

    // Friend function for post-decrement
    friend Number operator--(Number& obj, int) {
        Number temp(obj);
        --obj.value;
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