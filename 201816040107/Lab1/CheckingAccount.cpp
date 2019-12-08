// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
CheckingAccount::CheckingAccount(double a,double b)
    :Account(a)
{
    transactionFee=b;
}
void CheckingAccount::credit(double c)
{
    chargeFee();
    Account::credit(c);

}
// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
void CheckingAccount::debit(double c)
{
    if(Account::debit(c))
    {
        chargeFee();

    }
    else
        Account::debit(c);
}
// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/

// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
void CheckingAccount::chargeFee()
{
    Account::balance-=1;
    cout<<"$1.00 transaction fee charged"<<endl;

}

