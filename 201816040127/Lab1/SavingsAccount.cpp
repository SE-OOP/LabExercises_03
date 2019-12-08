#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount(double initialBalance,double rate)
           :Account(initialBalance)
{
        interestRate = rate;
}
// the SavingsAccount constructor to call the Account constructor and validate and set the interest rate value */

// return the amount of interest earned
double SavingsAccount::calculateInterest( )
{
    return(getBalance()*interestRate);
}
// the calculateInterest member function to return the interest based on the current balance and interest rate
