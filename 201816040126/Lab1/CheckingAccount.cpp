// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

CheckingAccount::CheckingAccount( double balance , double transactionfee )
: Account( balance )
{
    setTransactionFee( transactionfee );
}
// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */

void CheckingAccount::setTransactionFee( double transactionfee )
{
    if ( transactionfee > 0 )
    transactionFee = transactionfee;

    else{
        cout << "The transaction fee should be greater than 0. \nInitialize it to 1";
        transactionFee = 1;
    }
}
//function setTransactionFee

double CheckingAccount::getTransactionFee()
{
    return transactionFee;
}
//function getTransactionFee

void CheckingAccount::credit( double amount )
{
    balance = getBalance() + amount - getTransactionFee();
    cout  << "$" << getTransactionFee() << " transaction fee charged.\n";
}
// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */

bool CheckingAccount::debit( double amount )
{
   if ( amount > getBalance() ) // debit amount exceeds balance
   {
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   } // end if
   else // debit amount does not exceed balance
      balance =  chargeFee() - amount ;
      cout  << "$" << getTransactionFee() << " transaction fee charged.\n";
      return true;// end else
}
// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/

double CheckingAccount::chargeFee()
{
    return  getBalance() - getTransactionFee();
    //cout  << "$" << getTransactionFee() << " transaction fee charged.";
}
// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
