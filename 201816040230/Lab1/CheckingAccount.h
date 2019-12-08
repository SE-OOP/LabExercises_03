// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H
#include"Account.h"
/* Write a directive to include the Account header file */
class CheckingAccount : public Account
/* Write a line to have class CheckingAccount inherit publicly from Account */
{
public:
   // constructor initializes balance and transaction fee
   /* Declare a two-argument constructor for CheckingAccount */
  CheckingAccount(double,double);
  void credit(double);
  bool debit(double);
   /* Redeclare member function credit, which will be redefined */
   /* Redeclare member function debit, which will be redefined */
private:
   /* Declare data member transactionFee */
   double transactionFee;
   void chargeFee();
   // utility function to charge fee
   /* Declare member function chargeFee */
}; // end class CheckingAccount

#endif


