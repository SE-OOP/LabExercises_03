// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H
#include"Account.h"
/* Write a directive to include the Account header file */

/* Write a line to have class CheckingAccount inherit publicly from Account */
class CheckingAccount:public Account
{
public:
    CheckingAccount(double,double);
   // constructor initializes balance and transaction fee
   /* Declare a two-argument constructor for CheckingAccount */

   /* Redeclare member function credit, which will be redefined */
   void credit( double );
   /* Redeclare member function debit, which will be redefined */
   void debit( double );
private:
    double transactionFee;
   /* Declare data member transactionFee */
   void chargeFee(double);// utility function to charge fee
   /* Declare member function chargeFee */
}; // end class CheckingAccount

#endif
