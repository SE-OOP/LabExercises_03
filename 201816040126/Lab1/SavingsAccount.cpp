// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount(
double balance, double interestRate )
: Account( balance )
{
    setInterestRate( interestRate );
}

void SavingsAccount::setInterestRate( double interestRate )
{
    if( interestRate < 0){
        cout << "\nThe interestRate should be greater than 0.\nMake the interestRate 0.01 .";
        InterestRate = 0.01;
    }
        else
    InterestRate = interestRate;
}
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */

double SavingsAccount::getInterestRate()
{
    return InterestRate;
}
//function getInterestRate

// return the amount of interest earned
double SavingsAccount::getCalculateInterest()
{
    return getBalance() * getInterestRate();
}
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */


