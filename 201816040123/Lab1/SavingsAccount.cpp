// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition
#include <iostream>
using namespace std;

// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
SavingsAccount::SavingsAccount( double a, double b):Account(a)
{
    if(b>0)
        llb=b;
    else
    {
        cerr<<"¸ÃÀûÂÊ±È´íÎó"<<endl;
        exit(0);
    }
}
// return the amount of interest earned
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
double SavingsAccount::calculateInterest()
{
    return Account::getBalance()*llb;
}
