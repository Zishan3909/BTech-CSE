// Create a base class called shape. Use this class to store two double type values that could 
// be used to compute the area of figures. Derive two specific classes called triangle and 
// rectangle from base shape. Add to the base class, a member function get_data() to 
// initialize base class data members and another member function display_area() to 
// compute and display the area of figures. Make display_area() as a virtual function and 
// redefine this function in the derived class to suit their requirements. Using these three 
// classes, design a program that will accept the dimensions of a triangle or a rectangle 
// interactively and display the area. Remember the two values given as input will be treated 
// as lengths of two sides in the case of rectangles and as base and height in the case of a 
// triangle, and used as follows: 
// Area of rectangle = x * y 
// Area of triangle = ½ *x*y

#include <iostream>
using namespace std;

class shape{
    
    protected:
    double x,y;
    public:
    void get_data(){
        cin >> x >> y;
    }
    virtual void display_area() {
        cout<<"Area of shape: "<<endl;
    }

};
class triangle: public shape{
    public:
    void display_area() {
        cout<<"Area of triangle: "<<0.5*x*y<<endl;
    }
};
class rectangle: public shape{
    public:
    void display_area() {
        cout<<"Area of rectangle: "<<x*y<<endl;
    }
};
int main(){
    triangle t;
    cout<<"Enter triangle base and height: ";
    t.get_data();
    t.display_area();
    rectangle r;
    cout<<"Enter rectangle length and breadth: ";
    r.get_data();
    r.display_area();
    return 0;
}