// Lab 1: SavingsAccount.h
// Definition of SavingsAccount class.
#ifndef SAVINGS_H
#define SAVINGS_H
#include <iostream>
#include "Account.h"

using namespace std;

/* Write a directive to include the Account header file */

/* Write a line to have class SavingsAccount inherit publicly from Account */
class SavingsAccount : public Account
{
public:
   SavingsAccount( double , double );
   void setInterestRate( double );//function setInterestRate
   double getInterestRate();//function getInterestRate
   double getCalculateInterest();//function getCalculateInterest
// constructor initializes balance and interest rate
   /* Declare a two-parameter constructor for SavingsAccount */

   /* Declare member function calculateInterest */
private:
    double InterestRate;
    /* Declare data member interestRate */
}; // end class SavingsAccount

#endif
