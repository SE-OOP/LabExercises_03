#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
SavingsAccount::SavingsAccount(double initialBalance,double fee):Account(initialBalance)
   {
       setinterestRate(fee);
   }
// return the amount of interest earned
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
void  SavingsAccount::calculateInterest()
{

    balance=getBalance()*(1+interestRate);

}

void SavingsAccount::setinterestRate(double fee)
{
    interestRate= fee;
}

double SavingsAccount::getinterestRate()
{
    return interestRate;
}
