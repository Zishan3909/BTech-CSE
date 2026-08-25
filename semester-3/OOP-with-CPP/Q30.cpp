// Create class SavingsAccount. Use a static variable annualInterestRate to store the annual 
// interest rate for all account holders. Each object of the class contains a private instance 
// variable savingsBalance indicating the amount the saver currently has on deposit. Provide 
// method calculateMonthlyInterest() to calculate the monthly interest by multiplying the 
// savingsBalance by annualInterestRate divided by 12. This interest should be added to 
// savingsBalance. Provide a static method modifyInterestRate() that sets the 
// annualInterestRate to a new value. Write a program to test class SavingsAccount. 
// Instantiate two savingsAccount objects, saver1 and saver2, with balances of Rs 2000.00 
// and Rs 3000.00, respectively. Set annualInterestRate to 4%, then calculate the monthly 
// interest and print the new balances for both savers. Then set the annualInterestRate to 5%, 
// calculate the next month’s interest and print the new balances for both savers.
#include <iostream>
#include <iomanip>
using namespace std;

class SavingsAccount {
private:
    static float annualInterestRate;
    float savingsBalance;

public:
    SavingsAccount(float balance) : savingsBalance(balance) {}

    void calculateMonthlyInterest() {
        savingsBalance += savingsBalance * annualInterestRate / 12;
    }

    static void modifyInterestRate(float newRate) {
        annualInterestRate = newRate;
    }

    void displayBalance() const {
        cout << fixed << setprecision(2) << "The balance is: Rs " << savingsBalance << '\n';
    }
};

float SavingsAccount::annualInterestRate = 0.0f;

int main() {
    SavingsAccount saver1(2000.00f);
    SavingsAccount saver2(3000.00f);

    SavingsAccount::modifyInterestRate(0.04f);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    saver1.displayBalance();
    saver2.displayBalance();

    SavingsAccount::modifyInterestRate(0.05f);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    saver1.displayBalance();
    saver2.displayBalance();

    return 0;
}