//write a c++ program to print the dublicate in a string//
#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Duplicate characters in the string are: ";
    for (char ch : str) {
        if (str.find(ch) != str.rfind(ch)) {
            cout << ch << " ";
        }
    }
    cout << endl;

    return 0;
}