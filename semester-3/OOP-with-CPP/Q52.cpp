//Write a program for using open function and eof().
#include <iostream>
#include <fstream>
using namespace std;

int main (){
    ofstream out;

    out.open("Abc.txt");
    if (!out) {
        cerr << "Unable to open Abc.txt for writing." << endl;
        return 1;
    }
    out<<"This is me"<<endl;
    out.close();

    ifstream in;
    in.open("Abc.txt");
    if (!in) {
        cerr << "Unable to open Abc.txt for reading." << endl;
        return 1;
    }
    char ch;
    while(!in.eof()){
        if (in.get(ch)) {
            cout<<ch;
        }
    }
    in.close();
    return 0;
}