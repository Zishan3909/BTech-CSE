// You are given three classes A, B and C. All three classes implement their own version of 
// func. In class A, func multiplies the value passed as a parameter by 2. In class B, func 
// multiplies the value passed as a parameter by 3. In class C, func multiplies the value 
// passed as a parameter by 5. You are given class D such that You need to modify the class 
// D and implement the function update_val which sets D's val to new_val by manipulating 
// the value by only calling the func defined in classes A, B and C.It is guaranteed that 
// new_val has only 2, 3 and 5 as its prime factors. Implement class D's function update_val. 
// This function should update D's val only by calling A, B and C's func.
// Sample Input
// new_val = 30
// Sample Output 
// A's func called 1 times 
// B's func called 1 times 
// C's func called 1 times
#include <iostream>
using namespace std;

class A {
public:
    void func(int &val) {
        val = val * 2;
    }
};

class B {
public:
    void func(int &val) {
        val = val * 3;
    }
};

class C {
public:
    void func(int &val) {
        val = val * 5;
    }
};

class D : public A, public B, public C {
public:
    int val = 1;

    void update_val(int new_val) {

        int a = 0, b = 0, c = 0;

        // Keep dividing new_val to find its factors
        while (new_val % 2 == 0) {
            A::func(val);
            new_val = new_val / 2;
            a++;
        }

        while (new_val % 3 == 0) {
            B::func(val);
            new_val = new_val / 3;
            b++;
        }

        while (new_val % 5 == 0) {
            C::func(val);
            new_val = new_val / 5;
            c++;
        }

        cout << "A's func called " << a << " times" << endl;
        cout << "B's func called " << b << " times" << endl;
        cout << "C's func called " << c << " times" << endl;
    }
};

int main() {
    D d;

    d.update_val(30);

    return 0;
}
