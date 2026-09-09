//write a C++ program for multiple inheritance
#include <iostream>
using namespace std;

class A{
    protected:
        int m;
    public:
        void get_m(int x){
            m = x;
        }
};

class B{
    protected:
        int n;
    public:
        void get_n(int x){
            n = x;
        }
};

class C : public A, public B{
    public:
        void display(){
            cout << "Sum: " << m + n << endl;
        }
};

int main(){
    C object;
    object.get_m(100);
    object.get_n(200);
    object.display();

    return 0;
}