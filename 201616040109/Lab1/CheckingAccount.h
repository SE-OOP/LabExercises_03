// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

/* Write a directive to include the Account header file */
#include"Account.h"
/* Write a line to have class CheckingAccount inherit publicly from Account */
class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
   /* Declare a two-argument constructor for CheckingAccount */
   CheckingAccount(double,double);
   /* Redeclare member function credit, which will be redefined */
   void credit( double );
   /* Redeclare member function debit, which will be redefined */
   bool debit( double );
private:
   /* Declare data member transactionFee */
   double transactionFee;
   // utility function to charge fee
   /* Declare member function chargeFee */
    void chargeFee();
}; // end class CheckingAccount

#endif
