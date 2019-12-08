// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.
#include <iostream>
using namespace std;
#include"Account.h"
#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
SavingsAccount::SavingsAccount(double a,double b)
:Account(a)
{

    if(b>0&&b<1)
       interestRate=b;
    else
        throw invalid_argument("b must be 0 - 1");
}
// return the amount of interest earned

double SavingsAccount::calculateInterest()
{
    return getBalance()*interestRate;
}

