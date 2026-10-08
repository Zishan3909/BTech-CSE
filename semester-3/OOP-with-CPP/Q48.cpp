//Write a c++ program for abstract classes and pure virtual functions.
#include <iostream>
using namespace std;
// Abstract class
 class Base{
    public:
    virtual void disp() = 0; // pure virtual function
 };
 class Derived : public Base {
    public:
  void disp()
  {
    cout << "Derived class is here";

  }
};
int main (){
   Base *ptr;
   Derived objd;
   ptr = &objd;
   ptr->disp();
}
 