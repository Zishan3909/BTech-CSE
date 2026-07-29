//write a c++ program to construct a c++ program that removes a specific charector from a given string and return thee updated strings//  
#include<iostream>
using namespace std;
int main()
{
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to remove: ";
    cin >> ch;

    string updatedStr;
    for (char c : str) {
        if (c != ch) {
            updatedStr += c;
        }
    }

    cout << "Updated string: " << updatedStr << endl;

    return 0;
}
