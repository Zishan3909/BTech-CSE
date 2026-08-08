//write  a c++ program for first remove charectors from the first srting which are present in the second string//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    cout << "String after removing characters from the first string: " << str1 << endl;

    return 0;
}