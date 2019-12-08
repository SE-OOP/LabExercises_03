// Lab 1: SavingsAccount.h
// Definition of SavingsAccount class.
#ifndef SAVINGS_H
#define SAVINGS_H
#include <iostream>
#include "Account.h"

/* Write a directive to include the Account header file */

/* Write a line to have class SavingsAccount inherit publicly from Account */
class SavingsAccount : public Account
{
public:
   // constructor initializes balance and interest rate
   /* Declare a two-parameter constructor for SavingsAccount */
    SavingsAccount(double,double);
    double calculateInterest();//ÉùÃ÷calculateInternetº¯Êý£»
   /* Declare member function calculateInterest */
private:
   /* Declare data member interestRate */
   double rate;
}; // end class SavingsAccount

#endif
