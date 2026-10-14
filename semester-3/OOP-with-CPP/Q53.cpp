// Write a program to input student id and name and write the data into a file using ofstream.

#include <iostream>
#include <fstream>
#include <limits>
#include <string>
using namespace std;

class Student {
    int id;
    string name;

public:
    void getStudent() {
        cout << "Enter student ID: ";
        cin >> id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter student name: ";
        getline(cin, name);
    }

    void writeTo(ofstream& file) const {
        file << "Student ID: " << id << '\n';
        file << "Name: " << name << '\n';
    }
};

int main() {
    Student student;
    student.getStudent();

    ofstream file("student.txt");
    if (!file) {
        cerr << "Unable to open student.txt for writing." << endl;
        return 1;
    }

    student.writeTo(file);
    if (!file) {
        cerr << "Unable to write student details to student.txt." << endl;
        return 1;
    }

    cout << "Student details written to student.txt." << endl;
    return 0;
}
