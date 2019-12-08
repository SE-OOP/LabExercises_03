// Lab 1: SavingsAccount.h
// Definition of SavingsAccount class.
#ifndef SAVINGS_H
#define SAVINGS_H
#include"Account.h"
#include<string.h>
/* Write a directive to include the Account header file */

/* Write a line to have class SavingsAccount inherit publicly from Account */
class SavingsAccount:public Account
{
public:
   // constructor initializes balance and interest rate
   /* Declare a two-parameter constructor for SavingsAccount */
   SavingsAccount(double = 0.0,double = 0.0);
   void setInterestRate(double);
   double getInterestRate();

   /* Declare member function calculateInterest */
   double calculateInterest();
private:
   /* Declare data member interestRate */
   double interestRate;
}; // end class SavingsAccount

#endif
