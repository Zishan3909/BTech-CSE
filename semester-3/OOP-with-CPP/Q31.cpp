// Create a class Complex having two int type variable named real & img . denoting real and 
// imaginary part respectively of a complex number. Overload +, - , == operator to add, to 
// subtract and to compare two complex numbers being denoted by the two complex type 
// objects.
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;
public:
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, img + other.img);
    }

    Complex operator-(const Complex& other) {
        return Complex(real - other.real, img - other.img);
    }

    bool operator==(const Complex& other) {
        return (real == other.real && img == other.img);
    }
    void display() const {
        cout << real << " + " << img << "i" << endl;
    }
};
int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    if (c1 == c2) {
        cout << "c1 and c2 are equal." << endl;
    } else {
        cout << "c1 and c2 are not equal." << endl;
    }

    return 0;
}
