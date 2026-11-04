//Write a c++ program to use Map which is an associative array,contains key-value pairs.
#include <iostream>
#include <map>
#include <string>   
using namespace std;

int main() {
  
    // Create a map to store key-value pairs
    map<string, int> myMap;

    // Insert key-value pairs into the map
    myMap["Apple"] = 1;
    myMap["Banana"] = 2;
    myMap["Cherry"] = 3;

    // Display the contents of the map
    cout << "Contents of the map:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Accessing a value using a key
    string key = "Banana";
    if (myMap.find(key) != myMap.end()) {
        cout << "Value associated with key '" << key << "' is: " << myMap[key] << endl;
    } else {
        cout << "Key '" << key << "' not found in the map." << endl;
    }

    return 0;
}