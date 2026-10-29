//Write a function template to find the factorial of a number.
#include <iostream>
using namespace std;

template <class T>
T factorial(T n) {
  T fact = 1;
    for (T i = 1; i <= n; i++) {
        fact= fact*i;
    }
    return fact;
} 
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}