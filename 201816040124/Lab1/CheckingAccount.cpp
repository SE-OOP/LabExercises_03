// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

CheckingAccount::CheckingAccount(double a,double b)// constructor initializes balance and transaction fee
:Account(a),transactionFee(b)
{

}
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */

void CheckingAccount::credit(double amount)// credit (add) an amount to the account balance and charge fee
{
    setBalance(getBalance() + amount);
    chargeFee(amount);
}
/* Write the credit member function to call Account's credit function
   and then charge a fee */

void CheckingAccount::debit(double a)// debit (subtract) an amount from the account balance and charge fee
{
    if(Account::debit(a)==1)
    {
        chargeFee(a);
    }
}
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/

void CheckingAccount::chargeFee(double a)// subtract transaction fee
{
    setBalance(getBalance()-transactionFee);
    cout<<"$"<<transactionFee<<" transaction fee charged."<<endl;
}
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
