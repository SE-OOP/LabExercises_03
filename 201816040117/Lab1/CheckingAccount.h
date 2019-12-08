// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H


#include"Account.h"

class CheckingAccount:public Account
{
public:
   // constructor initializes balance and transaction fee

    CheckingAccount(double,double);

   void credit(double);

   void debit(double);
private:

    double transactionFee;
   // utility function to charge fee

   void chargeFee();
}; // end class CheckingAccount

#endif



