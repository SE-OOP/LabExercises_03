#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition
// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
CheckingAccount::CheckingAccount(double initialBalance, double fee)

:Account(initialBalance)
{
    setFee(fee);
}
// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
void CheckingAccount::setFee(double fee)
{
    if (fee>=0.0)
    {
        transactionFee =fee;
    }
    else
    {
        cout << "Error: Initial transactionFee cannot be negative." << endl;
      transactionFee = 0.0;
    }
}
void CheckingAccount::credit( double amount )
{
   Account::credit(amount);
}
// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
bool CheckingAccount::debit(double amount )
{

   if ( Account::debit(amount) ) // debit amount exceeds balance
   {
      return true;
   } // end if
   else // debit amount does not exceed balance
   {
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   } // end else
}
// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
double CheckingAccount::chargeFee()
{
    return getBalance()-transactionFee;
}
