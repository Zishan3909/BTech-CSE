//Write a c++ program for Heirarchical inheritnce.
#include <iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void get_a(int x){
        a = x;
    }
   
};
class B : public A{
    public:
    void square(){
        cout<<"square"<<(a*a)<<endl;

    }
};
class C : public A{
    public:
    void cube(){
        cout<<"cube"<<(a*a*a)<<endl;
    }
};
int main(){
    B obj1;
    C obj2;
    obj1.get_a(20);
    obj1.square();
    obj2.get_a(3);
    obj2.cube();
    return 0;
}
  