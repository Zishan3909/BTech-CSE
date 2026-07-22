// Make a calculator using c++ language with using four applications(+,-,*,/)
#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter n1 & n2"<<endl;
    cin>>n1>>n2;
    char ch;
    cout<<"enter operator"<<endl;
    cin>>ch;
    if (ch == '+')
    {cout<<n1+n2; }
    else if (ch == '-')
    {cout<<n1-n2;}
    else if (ch == '*')
    {cout<<n1*n2;} 
    else if (ch == '/')
    {cout<<n1/n2;}

}