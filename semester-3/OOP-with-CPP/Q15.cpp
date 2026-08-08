//write a c++ program for printing reverse of a string using recursion//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Reverse of the string is: ";
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}