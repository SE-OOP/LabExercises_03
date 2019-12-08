// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
   SavingsAccount::SavingsAccount(double initialBalance,double rate)
      :Account(initialBalance)//initialize base class
      {
          interestRate = (rate<0.0)?0.0:rate;//set interestRate
      }

// return the amount of interest earned
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
double SavingsAccount::calculateInterest()
{
   return getBalance() * interestRate;
} // end function calculateInterest
