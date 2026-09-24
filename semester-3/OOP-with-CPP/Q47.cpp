//Write a c++ program for virtual functions.
#include <iostream>
using namespace std;

class Base {
public:
    virtual void disp() {
        cout << "Base class" << endl;
    }

    virtual void show() {
        cout << "Base class show"<<endl;
    }
};

class Derived : public Base {
public:
    void disp(void) {
        cout << "Derived class" << endl;
    }

    void show(void) {
        cout << "Derived class show" << endl;
    }
};

int main() {
    Base *p;
    Base b;
    Derived d;

    p = &b;
    p->disp();
    p->show();

    p = &d;
    p->disp();
    p->show();

    return 0;
}