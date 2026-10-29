//Write a program using function template to display an array of elements.
#include <iostream>
using namespace std;

template <class T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "Integer Array: ";
    displayArray(intArray, 5);

    cout << "Double Array: ";
    displayArray(doubleArray, 5);

    return 0;
}
