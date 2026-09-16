// Write a c++ program for ambiguity resolution in inheritance.
#include <iostream>
using namespace std;
class parent {
public:
    void display() {
        cout << "Display from parent" << std::endl;
    }
};

class child1 {
public:
    void display() {
        cout << "Display from child1" << std::endl;
    }
};

class child : public parent, public child1 {
};

int main() {
    child c;
    c.parent::display();
    c.child1::display();

    return 0;
}