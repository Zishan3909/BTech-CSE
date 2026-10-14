// Create a base class called CAL_AREA(Abstract). Use this class to store float type values 
// that could be used to compute the volume of figures. Derive two specific classes called 
// cone, hemisphere and cylinder from the base CAL_AREA. Add to the base class, a 
// member function getdata ( ) to initialize base class data members and another member 
// function display volume( ) to compute and display the volume of figures. Make display 
// volume ( ) as a pure virtual function and redefine this function in the derived classes to 
// suit their requirements. Using these three classes, design a program that will accept 
// dimensions of a cone, cylinder and hemisphere interactively and display the volumes. 
// Remember values given as input will be and used as follows: 
// Volume of cone = (1/3)πr2h
// Volume of hemisphere = (2/3)πr3
// Volume of cylinder = πr2h

#include <iostream>
using namespace std;

class CAL_AREA{
    protected:
    float r,h;
    
    public:
    void getData(){
      cout<<"Enter radius: ";
      cin>>r;

      cout<<"Enter height: ";
      cin>>h;

    }
    virtual void displayVolume() = 0; // pure virtual function
};
class cone: public CAL_AREA{
    public:
    void displayVolume() {
        cout<<"Volume of cone: "<<(1.0/3.0)*3.14*r*r*h<<endl;
    }
};
class hemisphere: public CAL_AREA{
    public:
    void displayVolume() {
        cout<<"Volume of hemisphere: "<<(2.0/3.0)*3.14*r*r*r<<endl;
    }
};
class cylinder: public CAL_AREA{
    public:
    void displayVolume() {
        cout<<"Volume of cylinder: "<<3.14*r*r*h<<endl;
    }
};
int main()
{
    cone c;
    hemisphere hs;
    cylinder cy;
    int choice;

    cout << "1. Cone" << endl;
    cout << "2. Hemisphere" << endl;
    cout << "3. Cylinder" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        c.getData();
        c.displayVolume();
    }
    else if (choice == 2)
    {
        hs.getData();
        hs.displayVolume();
    }
    else if (choice == 3)
    {
        cy.getData();
        cy.displayVolume();
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}