// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H
#include"Account.h"
#include<string.h>
/* Write a directive to include the Account header file */

/* Write a line to have class CheckingAccount inherit publicly from Account */
class CheckingAccount:public Account
{
public:
   // constructor initializes balance and transaction fee
   /* Declare a two-argument constructor for CheckingAccount */
    CheckingAccount(double = 0.0,double = 0.0);

   /* Redeclare member function credit, which will be redefined */
   void credit(double);
   /* Redeclare member function debit, which will be redefined */
   void debit(double);
   void settransactionFee(double);
   double gettransactionFee();
   void print();
private:
   /* Declare data member transactionFee */
   double transactionFee;
   // utility function to charge fee
   /* Declare member function chargeFee */
   double chargeFee;
}; // end class CheckingAccount

#endif
