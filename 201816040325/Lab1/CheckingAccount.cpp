// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
CheckingAccount::CheckingAccount(double b,const double f)
:Account(b)
{
    transactionFee=f;
}

// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
void CheckingAccount::credit( double amount )//
{
    Account::credit(amount);
    chargeFee();
} // end function credit

// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
void CheckingAccount::debit( double amount )
{
    if(Account::debit(amount))
    {
        chargeFee();
    }

}
// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
void CheckingAccount::chargeFee()
{
    setBalance(getBalance()-transactionFee);
    cout<<"$"<<transactionFee<<" transaction fee charged."<<endl;
}
