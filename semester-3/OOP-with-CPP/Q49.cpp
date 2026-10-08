//Write a c++ prorgam for abstract classes and pure virtual functions.
#include <iostream>
using namespace std;

class Shape {
    protected:
    float d1,d2;
    public:
    void getdim (){
        cin >> d1 >> d2;
    }
    virtual float area() = 0; // pure virtual function
};
class triangle : public Shape {
    public:
    float area() {
        return 0.5 * d1 * d2;
    }
};
class rectangle : public Shape {
    public:
    float area() {
        return d1 * d2;
    }
};
int main()
{
    triangle t;
    cout<<"Enter triangle base and height: ";
    t.getdim();
    cout<<"Area of triangle: "<<t.area()<<endl;
    t.getdim();
    cout<<"Enter rectangle length and breadth: ";
    rectangle r;
    cout<<"Area of rectangle: "<<r.area()<<endl;
    return 0;
}