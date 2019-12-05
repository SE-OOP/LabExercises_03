// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
SavingsAccount ::SavingsAccount( double bal, double irate )
    :Account( bal )
{
    interestRate = irate;
}

// return the amount of interest earned
double SavingsAccount::calculateInterest( )
{
    return getBalance() * interestRate;
} // end function calculateInterest
