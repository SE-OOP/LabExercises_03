// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double b, double t)
       :Account(b)
{
    transactionFee=t;
}/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */

// credit (add) an amount to the account balance and charge fee
void  CheckingAccount::credit ( double a)
{
    Account::credit(a);
    chargeFee();
}/* Write the credit member function to call Account's credit function
   and then charge a fee */

void CheckingAccount::debit( double a )// debit (subtract) an amount from the account balance and charge fee
{

    if ( Account::debit(a)== 1)
    {
       chargeFee();
    }

}/* Write the debit member function to call Account's debit function
 and then charge a fee if it returned true*/

// subtract transaction fee
double CheckingAccount :: chargeFee ()
{
    return  Account::getBalance()- transactionFee ;
} /* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
