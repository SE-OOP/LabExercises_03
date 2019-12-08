// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate

SavingsAccount::SavingsAccount( double initialBalance,double rate)
:Account( initialBalance ),interestRate(rate)
{
}
// return the amount of interest earned

double SavingsAccount::calculateInterest()
{
    return getBalance()*interestRate;
}
