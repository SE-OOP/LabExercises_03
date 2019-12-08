// Lab 3: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"
/* Write a directive to include the Account header file */

/* Write a line to have class CheckingAccount inherit publicly from Account */
class CheckingAccount: public Account
{
public:
   // constructor initializes balance and transaction fee
    CheckingAccount( double = 0, double = 0);
   /* Declare a two-argument constructor for CheckingAccount */

    void credit( double );
   /* Redeclare member function credit, which will be redefined */
    bool debit( double );
   /* Redeclare member function debit, which will be redefined */
private:
   /* Declare data member transactionFee */
   double transactionFee;

   // utility function to charge fee
   void chargeFee();
   /* Declare member function chargeFee */
}; // end class CheckingAccount

#endif
