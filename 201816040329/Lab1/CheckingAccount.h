/ Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H
#include"Account.h"

class CheckingAccount:public Account
/* Write a line to have class CheckingAccount inherit publicly from Account */
{
public:
   // constructor initializes balance and transaction fee
   CheckingAccount(double=0.0,double=0.0);


   /* Redeclare member function credit, which will be redefined */
   void credit(double);
   /* Redeclare member function debit, which will be redefined */
   void debit(double);

private:
   /* Declare data member transactionFee */
   double transactionfee;
   // utility function to charge fee
   /* Declare member function chargeFee */
   double charF;
}; // end class CheckingAccount
