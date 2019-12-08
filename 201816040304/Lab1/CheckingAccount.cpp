// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee

CheckingAccount::CheckingAccount( double initialBalance,double fee)
:Account( initialBalance ),transactionFee(fee)
{
}
// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
void CheckingAccount::credit( double amount )
{
    setBalance(getBalance() + amount); // add amount to balance
    chargeFee();
} // end function credit

// debit (subtract) an amount from the account balance and charge fee

bool CheckingAccount::debit( double amount )
{

    if ( amount > getBalance() ) // debit amount exceeds balance
    {
       cout << "Debit amount exceeded account balance." << endl;
       chargeFee();
       return false;
    } // end if
    else // debit amount does not exceed balance
    {
       setBalance(getBalance() - amount);
       chargeFee();
       return true;
    } // end else
} // end function debit

// subtract transaction fee

void CheckingAccount::chargeFee()
{
    setBalance(getBalance() - transactionFee);
}
