//A c++ program for constructor overloading.
#include <iostream>
using namespace std;
 class Number{
    int a;
    public:
    Number(){
        cout<<"Default constructor called"<<endl;
        a=0;
    }
    Number(int num){
        cout<<"Parameterized constructor called"<<endl;
        a=num;
    }
    Number(Number &obj){
      cout<<"Copy constructor called"<<endl;
      a=obj.a;
    }
    void display(){
        cout<<"The value of a is: "<<a<<endl;
    }
};

int main(){
    Number x,y,z(40),z2;
    x.display();
    y.display();
    z.display();
    z2.display();
    return 0;
}



 