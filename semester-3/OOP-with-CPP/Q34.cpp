//write a c++ program to show single inheritance
#include <iostream>
using namespace std;
class Employee {
public:
    int id;
    float salary;
    Employee(int inpId) : id(inpId), salary(60000) {}
};

class Programmer : public Employee {
public:
    int lc; // lines of code

    Programmer(int inpId) : Employee(inpId), lc(0) {}

    void getdata() {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Lines of Code: " << lc << endl;
    }
};

int main() {
    Programmer tom(10);
    Programmer jerry(20);

    tom.getdata();
    jerry.getdata();

    return 0;
}
    
