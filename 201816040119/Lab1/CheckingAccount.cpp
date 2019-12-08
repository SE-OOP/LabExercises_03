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
// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
// credit (add) an amount to the account balance
void CheckingAccount::credit(double a)
{
   Account::credit(a); // add amount to balance
   balance-=1;
} // end function credit
// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
// return bool indicating whether money was debited
bool CheckingAccount::debit(double a)
{
   balance-=1;
   return Account::debit(a);
} // end function debit
// subtract transaction fee
