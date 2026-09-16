// Create a class called Student that contains the data members like age, name, enroll_no, 
// marks. Create another class called Faculty that contains data members like facultyName, 
// facultyCode, salary,deptt, age, experience, gender. Create the function display() in both 
// the classes to display the respective information. The derived Class Person demonstrates 
// multiple inheritance. The program should be able to call both the base classes and displays 
// their information. Remove the ambiguity (When we have exactly same variables or same 
// methods in both the base classes, which one will becalled?) by proper mechanism
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int age;
    string name;
    int enroll_no;
    float marks;

    void display() {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Enrollment Number: " << enroll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Faculty {
public:
    string facultyName;
    int facultyCode;
    float salary;
    string deptt;
    int age;
    int experience;
    string gender;

    void display() {
        cout << "Faculty Information:" << endl;
        cout << "Name: " << facultyName << endl;
        cout << "Faculty Code: " << facultyCode << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << deptt << endl;
        cout << "Age: " << age << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Gender: " << gender << endl;
    }
};

class Person : public Student, public Faculty {
public:
    void display() {
        Student::display();
        cout << endl;
        Faculty::display();
    }
};

int main() {
    Person person;

    person.Student::age = 20;
    person.name = "Aarav";
    person.enroll_no = 101;
    person.marks = 87.5f;

    person.Faculty::age = 42;
    person.facultyName = "Dr. Sharma";
    person.facultyCode = 501;
    person.salary = 75000.0f;
    person.deptt = "Computer Science";
    person.experience = 15;
    person.gender = "Female";

    person.display();

    return 0;
}