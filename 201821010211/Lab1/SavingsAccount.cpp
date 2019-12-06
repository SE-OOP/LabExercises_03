// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount(const double &balance,const double interestRate)
                   : Account(balance)
{
}
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
// return the amount of interest earned
double SavingsAccount::calculateInterest()
{
         return getBalance()*interestRate;
}/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
