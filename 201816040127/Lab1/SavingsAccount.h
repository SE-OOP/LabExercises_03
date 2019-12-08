#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h"
// a directive to include the Account header file
class SavingsAccount : public Account
// a line to have class SavingsAccount inherit publicly from Account
{
public:
   // constructor initializes balance and interest rate
   SavingsAccount(double =0.0,double =0.0);
   // Declare a two-parameter constructor for SavingsAccount
   double calculateInterest();
   // Declare member function calculateInterest
private:
    double interestRate;
   //Declare data member interestRate
}; // end class SavingsAccount

#endif
