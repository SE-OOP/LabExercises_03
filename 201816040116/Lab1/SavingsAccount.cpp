// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.
#include"Account.h"
#include "SavingsAccount.h" // SavingsAccount class definition
                            // constructor initializes balance and interest rate
SavingsAccount::SavingsAccount(double initialBalance,double Rate)
 :Account(initialBalance)
{
   interestRate=Rate;
}
                            // return the amount of interest earned
double SavingsAccount::calculateInterest()
{
    return balance*interestRate;
}
