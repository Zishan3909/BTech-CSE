// write a c++ program for template .
#include <iostream>
using namespace std;

template <class T1, class T2>
float sum (T1 a, T2 b) {
    return a + b;
}
int main(){
    cout << "integer sum "<<sum(5, 6) << endl;
    cout << "float sum "<<sum(5.5, 6.5) << endl;
    cout << "integer/float sum "<<sum(5, 6.5) << endl;
    cout << "float/integer sum "<<sum(5.5, 6) << endl;
    return 0;
}