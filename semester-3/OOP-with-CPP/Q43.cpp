// Write a c++ program for virtual base class.
#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
public:
    void getRoll(int number) { roll = number; }
};

class Test : virtual public Student {
protected:
    float marks;
public:
    void getMarks(float value) { marks = value; }
};

class Sports : virtual public Student {
protected:
    float score;
public:
    void getScore(float value) { score = value; }
};

class Result : public Test, public Sports {
public:
    void show() {
        cout << "Roll number: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Sports score: " << score << endl;
    }
};

int main() {
    Result student;

    student.getRoll(101);
    student.getMarks(85.5f);
    student.getScore(9.5f);
    student.show();

    return 0;
}