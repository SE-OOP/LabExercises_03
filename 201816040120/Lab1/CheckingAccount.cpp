// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
CheckingAccount::CheckingAccount(double initialBalance, double transactionFee)
:Account(initialBalance)
{
    this->transactionFee = transactionFee;
}
// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
void CheckingAccount::credit(double amount)
{
    setBalance(getBalance() + amount - transactionFee) ;
}
// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
void CheckingAccount::debit(double amount)
{
    if ( amount > getBalance() + transactionFee ) // debit amount exceeds balance
   {
      cout << "Debit amount exceeded account balance." << endl;
   }
   else
    setBalance(getBalance() - amount - transactionFee);
}
// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
void CheckingAccount::chargeFee()
{
    cout<<"\""<<transactionFee<<"transaction fee change" <<"\""<<endl;
}
