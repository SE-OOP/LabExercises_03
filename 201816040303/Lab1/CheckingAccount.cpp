// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double b,double f)
:Account(b)
{
    transactionFee = ( f < 0.0 ) ? 0.0 : f;
}
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double a )
{
   Account::credit( a ); // always succeeds
   chargeFee();
}
/* Write the credit member function to call Account's credit function
   and then charge a fee */

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double a )
{
   bool s = Account::debit( a ); // attempt to debit

   if ( s ) // if money was debited, charge fee and return true
   {
      chargeFee();
      return true;
   } // end if
   else // otherwise, do not charge fee and return false
      return false;
}
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/

// subtract transaction fee
void CheckingAccount::chargeFee()
{
   Account::setBalance( getBalance() - transactionFee );
   cout << "$" << transactionFee << " transaction fee charged." << endl;
}
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
