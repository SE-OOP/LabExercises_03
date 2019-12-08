// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H
#include <iostream>
#include "Account.h"
/* Write a directive to include the Account header file */

class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
   /* Declare a two-argument constructor for CheckingAccount */
    CheckingAccount(double,double);//声明CheckingAccount函数；
    void credit(double);//声明credit函数；
    void debit(double);//声明debit函数；
   /* Redeclare member function credit, which will be redefined */
   /* Redeclare member function debit, which will be redefined */
private:
   /* Declare data member transactionFee */
    double transactionFee;
   // utility function to charge fee
   /* Declare member function chargeFee */
   void chargeFee();//声明chargeFee函数；
}; // end class CheckingAccount

#endif
