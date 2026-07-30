//Implement a c++ program to find the non-repeating charectors in a string//
#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Non-repeating characters in the string are: ";
    for (char ch : str) {
        if (str.find(ch) == str.rfind(ch)) {
            cout << ch << " ";
        }
    }
    cout << endl;

    return 0;
}