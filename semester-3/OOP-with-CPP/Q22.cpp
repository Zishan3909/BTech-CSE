// Anna is a contender for valedictorian of her high school. She wants to know how many
// students (if any) have scored higher than her in the exams given during this semester.
// Create a class named Student with the following specifications:
// • An instance variable named scores holds a student's 5 exam scores.
// • A void input() function reads 5 integers and saves them to scores.
// • An int calculateTotalScore() function that returns the sum of the student's scores.

#include<iostream>
using namespace std;

class Student
{
    int scores[5];
public:
    void input();
    int calculateTotalScore();
};

void Student::input()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> scores[i];
    }
}

int Student::calculateTotalScore()
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += scores[i];
    }
    return total;
}

int main()
{
    int n;
    cin >> n;

    Student anna;
    anna.input();

    int annaTotal = anna.calculateTotalScore();
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        Student s;
        s.input();
        if (s.calculateTotalScore() > annaTotal)
            count++;
    }

    cout << count << endl;
    return 0;
}
   