#include <iostream>
#include <stdexcept>
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;
// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
SavingsAccount::SavingsAccount(double initialBalance,double rate)
:Account(initialBalance)
{
    interestRate=rate;
}
// return the amount of interest earned
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
double SavingsAccount::calcuateInterest()
{
    return (Account::getBalance()*interestRate);
}
