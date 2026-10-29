//Write a proram to display the contents of the file in reverse order.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string str,line;
    ifstream file("file.txt");
    if(!file){
        cout<<"File not found!"<<endl;
        return 1;
    }
    while(getline(file,line)){
        str=line+str;
    }
     file.close();
     cout<<"Contents of the file in reverse order: "<<endl;

     for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
     }
     return 0;

}
