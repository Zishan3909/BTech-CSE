//Write a c++ program for pointers to derived class.
#include <iostream>
using namespace std;

class Base {
protected:
    int baseValue{};

public:
    void setb(int value) {
        baseValue = value;
    }

    virtual void disp() {
        cout << "Base value: " << baseValue << endl;
    }
};

class Derived : public Base {
private:
    int derivedValue{};

public:
    void setd(int value) {
        derivedValue = value;
    }

    void disp() override {
        cout << "Base value: " << baseValue << endl;
        cout << "Derived value: " << derivedValue << endl;
    }
};



int main(){
    Base *bp;
    Base b;
    bp = &b;
    bp->setb(50);
    bp->disp();
   
    Derived d;
    bp = &d;
    bp->setb(500);
    bp->disp();

    Derived *dp;
    dp = &d;
    dp->setd(100);
    dp->disp();
    dp->setb(1000);

    ((Derived*)bp)->setd(200);
    ((Derived*)bp)->disp();

};