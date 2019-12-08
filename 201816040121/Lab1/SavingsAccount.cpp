// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.
#include <iostream>
#include <stdexcept>
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;
// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
SavingsAccount::SavingsAccount(double balance, double i)
	:Account(balance)
{
	interestRate = i;
}

// return the amount of interest earned
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
double SavingsAccount::calculateInterest()
{
	double sum;
	sum = getBalance() * interestRate;
	return sum;
}
