// Create a class called Time that has separate int member data for hours, minutes and 
// seconds. One constructor should initialize this data to 0, and another should initialize it to 
// fixed values. A member function should display it in 11:59:59 format. A member function 
// named add() should add two objects of type time passed as arguments. A main ( ) program 
// should create two initialized values together, leaving the result in the third time variable. 
// Finally, it should display the value of this third variable
#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:        
    int hours;
    int minutes;
    int seconds;        

public:
    Time();
    Time(int h, int m, int s);
    void display() const;
    void add(const Time& first, const Time& second);
};

Time::Time() : hours(0), minutes(0), seconds(0) {
}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
}

void Time::display() const {
    cout << hours << ':' << setfill('0') << setw(2) << minutes << ':'
         << setw(2) << seconds << setfill(' ') << endl;
}

void Time::add(const Time& first, const Time& second) {
    seconds = first.seconds + second.seconds;
    minutes = first.minutes + second.minutes + seconds / 60;
    hours = first.hours + second.hours + minutes / 60;
    seconds %= 60;
    minutes %= 60;
}

int main() {
    Time first(5, 45, 30);
    Time second(6, 20, 45);
    Time result;

    result.add(first, second);
    result.display();

    return 0;
}
    