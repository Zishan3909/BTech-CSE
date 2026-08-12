//write a c++ program for array of objects.
#include <iostream>
using namespace std;

class Stu
{
    int id;
    char name[20];

public:
    void getstu();
    void putstu();
};

void Stu::getstu()
{
    cin >> id >> name;
}

void Stu::putstu()
{
    cout << id << "\t" << name << endl;
}

int main()
{
    Stu s[15];    // Object array
    int n, i;

    cout << "Enter the no. of students (1-15)" << endl;
    cin >> n;

    if (n < 1 || n > 15)
        cout << "Value (1-15) only";
    else
    {
        for (i = 0; i < n; i++)
            s[i].getstu();    // Data stored

        cout << "Id\tName\n";  // Show result

        for (i = 0; i < n; i++)
            s[i].putstu();
    }

    return 0;
}