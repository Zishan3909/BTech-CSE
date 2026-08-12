//Implement a Program in C++ by defining a class to represent a bank account. Include the following:
// Data Members 
//• Name of the depositor 
//• Account number 
//• Type of account (Saving, Current etc.) 
//• Balance amount in the account 
// Member Functions 
//• To assign initial values 
//• To deposit an amount 
//• To withdraw an amount after checking the balance 
//• To display the name and balance.
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string depositorName;
    int accountNumber;
    string accountType;
    float balance;

public:
    // Constructor to assign initial values
    BankAccount(string name, int accNumber, string accType, float initialBalance)
    {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw an amount after checking the balance
    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Function to display the name and balance
    void display()
    {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account("Zishan", 12345, "Saving", 10000);

    account.display();

    cout << "\nDepositing 5000..." << endl;
    account.deposit(5000);

    cout << "\nWithdrawing 3000..." << endl;
    account.withdraw(3000);

    cout << "\nFinal Account Details:" << endl;
    account.display();

    return 0;
}