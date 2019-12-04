// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

#include"Account.h"

class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
    CheckingAccount(double,double);


  void credit( double ); // add an amount to the account balance
   bool debit( double );
private:
   double transaccount;
   // utility function to charge fee
   void chargefree();
}; // end class CheckingAccount

#endif
