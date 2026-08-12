//Define a class Hotel in C++ with the following specifications Private members: 
//• Rno Data member to store room number 
//• Name Data member to store customer name 
//• Tariff Data member to store per day charges 
//• NOD Data member to store number of days of stay 
//• CALC() Function to calculate and return amount as NOD*Tariff, and if the value of days* Tariff >10000, then total amount is 1.05* days*Tariff. Public members: 
//• Checkin() Function to enter the content Rno, Name, Tariff and NOD 
//• Checkout() Function to display Rno, Name, Tariff, NOD and Amount (amount to be displayed by calling function) CALC()
#include <iostream>
#include <string>
using namespace std;
using namespace std;

class Hotel
{
private:
    int Rno;
    string Name;
    float Tariff;
    int NOD;

    float CALC()
    {
        float amount = NOD * Tariff;

        if (amount > 10000)
            amount = 1.05 * amount;

        return amount;
    }

public:
    void Checkin()
    {
        cout << "Enter Room Number: ";
        cin >> Rno;

        cout << "Enter Customer Name: ";
        cin >> Name;

        cout << "Enter Tariff per day: ";
        cin >> Tariff;

        cout << "Enter Number of Days of Stay: ";
        cin >> NOD;
    }

    void Checkout()
    {
        cout << "\n--- Hotel Details ---" << endl;
        cout << "Room Number: " << Rno << endl;
        cout << "Customer Name: " << Name << endl;
        cout << "Tariff per day: " << Tariff << endl;
        cout << "Number of Days: " << NOD << endl;
        cout << "Total Amount: " << CALC() << endl;
    }
};

int main()
{
    Hotel h;

    h.Checkin();
    h.Checkout();

    return 0;
}