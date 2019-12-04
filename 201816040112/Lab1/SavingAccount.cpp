#include "Account.h"
#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
SavingsAccount::SavingsAccount(double a,double b):Account(a)
{

    interestRate=b;
}
// return the amount of interest earned
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
double  SavingsAccount::calculateInterest()
{
    interestRate=getBalance()*interestRate;
    credit(interestRate);
    return interestRate;
}
