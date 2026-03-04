/******************************************************************************
Kaden Rodriguez
CSCI 272
Lesson 4
Copying Code Example
3/3/2026
*******************************************************************************/
#include "BankAccount"

int main() {

    bankAccount account;   // Create object

    account.deposit(500.0);
    account.withdraw(200.0);

    account.displayBalance();

    cout << "Transactions completed successfully." << endl;

    return 0;
}
    