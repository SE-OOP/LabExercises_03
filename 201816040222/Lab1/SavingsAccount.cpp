#include <iostream>
#include "SavingsAccount.h" // SavingsAccount class definition

using namespace std;
// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
SavingsAccount::SavingsAccount(double initialBalance, double rate)

:Account(initialBalance)
{
    setRate(rate);
}
// return the amount of interest earned
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
void SavingsAccount::setRate(double rate)
{
    if (rate>=0.0)
    {
        interestRate=rate;
    }
    else
    {
        cout << "Error: Initial interestRate cannot be negative." << endl;
     interestRate = 0.0;
    }
}
double SavingsAccount::getRate()
{
    return interestRate;
}
double SavingsAccount::calculateInterest()
{
    return getBalance()*getRate();
}
