//write a c++ program to use string functions to perform various operations on strings algorithm,geeks,erase and replace functions//
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1 = "algorithm";
    string str2 = "geeks";

    // Concatenation
    string concatenated = str1 + " " + str2;
    cout << "Concatenated String: " << concatenated << endl;

    // Erase function
    str1.erase(0, 3); // Erase first 3 characters from str1
    cout << "After Erase: " << str1 << endl;

    // Replace function
    str2.replace(0, 5, "programming"); // Replace first 5 characters of str2 with "programming"
    cout << "After Replace: " << str2 << endl;

    return 0;
}
