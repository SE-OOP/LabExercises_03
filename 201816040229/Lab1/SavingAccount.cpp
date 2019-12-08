// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition
#include "Account.h"
#include <string.h>
// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
SavingsAccount::SavingsAccount(
    double balance, double interest)
    :Account(balance)
    {
        setInterestRate(interest);
    }
// return the amount of interest earned
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
void SavingsAccount::setInterestRate(double interest)
{
    interestRate=interest;
}
double SavingsAccount::getInterestRate()
{
    return interestRate;
}
double SavingsAccount::calculateInterest()
{
    return getInterestRate()*getBalance();
}
