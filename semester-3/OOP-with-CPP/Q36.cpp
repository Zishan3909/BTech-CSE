// Write a C++ program for multilevel inheritance.
#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void get_roll_no(int x){
            roll_no = x;
        }

        void put_roll_no(){
            cout << "Roll No: " << roll_no << endl;
        }
};

class Test : public Student{
    protected:
        float marks1, marks2;
    public:
        void get_marks(float m1, float m2){
            marks1 = m1;
            marks2 = m2;
        }

        void put_marks(){
            cout << "Marks 1: " << marks1 << endl;
            cout << "Marks 2: " << marks2 << endl;
        }
};

class Result : public Test{
    public:
        void display(){
            cout << "Total: " << marks1 + marks2 << endl;
            put_roll_no();
            put_marks();
        }
};

int main(){
    Result student;
    student.get_roll_no(101);
    student.get_marks(85.5f, 90.0f);
    student.display();

    return 0;
}