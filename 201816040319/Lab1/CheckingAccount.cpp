// Lab 3: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double money, double fee): Account(money)
{
    transactionFee = fee;
}
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
    Account::credit( amount );
    chargeFee();
}
/* Write the credit member function to call Account's credit function
   and then charge a fee */

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
    if ( Account::debit( amount + transactionFee ) )
    {
        Account::credit( transactionFee );
        chargeFee();
        return true;
    }
    else
    {
        //cout << "Debit amount exceeded account balance." << endl;
        return false;
    }
}
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/

// subtract transaction fee
void CheckingAccount::chargeFee()
{
    if ( Account::debit( transactionFee ) )
        cout << "$" << transactionFee << " transaction fee charged." << endl;
}
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */


