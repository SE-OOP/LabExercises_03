// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double bal, double fee )
    :Account( bal )
{
    transactionFee = fee;
}

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
   setBalance( getBalance() + amount - transactionFee); // add amount to balance
} // end function credit

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
   if ( !Account::debit(amount) ) // debit amount exceeds balance
   {
      return false;
   } // end if
   else // debit amount does not exceed balance
   {
      setBalance( chargeFee() );
      return true;
   } // end else
} // end function debit

// subtract transaction fee
double CheckingAccount::chargeFee( )
{
    return getBalance() - transactionFee;
} // end function chargeFee
