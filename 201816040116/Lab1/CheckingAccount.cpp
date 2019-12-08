// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;
#include"Account.h"
#include"CheckingAccount.h" // CheckingAccount class definition
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double initialBalance,double Fee)
:Account(initialBalance)
{
    transactionFee=Fee;
}
// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount)
{
     balance=balance+amount;
}
// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit(double amount)
{
    if ( amount > balance )         // debit amount exceeds balance
   {
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   }                                // end if
   else                             // debit amount does not exceed balance
   {
      balance = balance - amount;
      chargeFee();
      return true;
   }
}
// subtract transaction fee
void CheckingAccount::chargeFee()
{
    balance=balance-transactionFee;
    cout<<"The account has been debit and the transaction fee has been deducted";
}
