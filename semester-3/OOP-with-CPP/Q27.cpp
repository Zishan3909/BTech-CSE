// Imagine a tollbooth with a class called TollBooth. The two data items are of type unsigned 
// int and double to hold the total number of cars and total amount of money collected. A 
// constructor initializes both of these data members to 0. A member function called 
// payingCar( )increments the car total and adds 0.5 to the cash total. Another function called 
// nonPayCar( ) increments the car total but adds nothing to the cash total. Finally, a member 
// function called display( )shows the two totals. Include a program to test this class. This 
// program should allow the user to push one key to count a paying car and another to count 
// a non-paying car. Pushing the ESC key should cause the program to print out the total 
// number of cars and total cash and then exit.
#include <iostream>
#include <conio.h> 
using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth();
    void payingCar();
    void nonPayCar();
    void display() const;
};

TollBooth::TollBooth() : totalCars(0), totalCash(0.0) {
}

void TollBooth::payingCar() {
    ++totalCars;
    totalCash += 0.5;
}

void TollBooth::nonPayCar() {
    ++totalCars;
}

void TollBooth::display() const {
    cout << "Total cars: " << totalCars << endl;
    cout << "Total cash: $" << totalCash << endl;
}

int main() {
    TollBooth toll;
    char key;

    cout << "Press P for a paying car, N for a non-paying car." << endl;
    cout << "Press E to exit and display totals." << endl;

    while (true) {
        cout << "\nEnter choice: ";
        cin >> key;

        if (key == 'P' || key == 'p') {
            toll.payingCar();
            cout << "Paying car counted." << endl;
        }
        else if (key == 'N' || key == 'n') {
            toll.nonPayCar();
            cout << "Non-paying car counted." << endl;
        }
        else if (key == 'E' || key == 'e') {
            toll.display();
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}