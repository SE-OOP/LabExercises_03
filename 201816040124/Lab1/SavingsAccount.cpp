// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.
#include "SavingsAccount.h" // SavingsAccount class definition
SavingsAccount::SavingsAccount(double a,double b)// constructor initializes balance and interest rate
:Account(a),interestRate(b)
{

}
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
double SavingsAccount::calculateInterest()// return the amount of interest earned
{
    return getBalance()*interestRate;
}
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
