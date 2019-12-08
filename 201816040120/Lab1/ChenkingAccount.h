// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h"
/* Write a directive to include the Account header file */

/* Write a line to have class CheckingAccount inherit publicly from Account */
class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
   /* Declare a two-argument constructor for CheckingAccount */
   CheckingAccount(double , double);
   /* Redeclare member function credit, which will be redefined */
   void credit( double ); // add an amount to the account balance
   /* Redeclare member function debit, which will be redefined */
   void debit( double ); // subtract an amount from the account balance
private:
   /* Declare data member transactionFee */
   double transactionFee;
   // utility function to charge fee
   /* Declare member function chargeFee */
   void chargeFee();
   // end class CheckingAccount
};

#endif
