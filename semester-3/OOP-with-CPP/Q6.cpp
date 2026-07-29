//c++ program for new & delete keyword
#include <iostream>
using namespace std;
int main(){
    int a = 20;
    int *ptr =&a;
    cout << "Value of a " << *(ptr);

    // New keyword
    int *p = new int (40);
    cout << "\nValue of p " << *p;
    int *arr = new int[3];
    arr[0] = 20;
    arr[1] = 30;    
    arr[2] = 50;
   cout << arr [1];
   cout << arr [5];

    delete[] arr;
    
}