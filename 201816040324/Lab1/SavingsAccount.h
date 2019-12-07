// Lab 1: SavingsAccount.h
// Definition of SavingsAccount class.
#ifndef SAVINGS_H
#define SAVINGS_H
#include"Account.h"
using namespace std;
/* Write a directive to include the Account header file */
class SavingsAccount
 : public Account
/* Write a line to have class SavingsAccount inherit publicly from Account */
{
public:
   // constructor initializes balance and interest rate
   SavingsAccount(double ,double );
   /* Declare a two-parameter constructor for SavingsAccount */
   double calculateInterest();
   /* Declare member function calculateInterest */
private:
     double interest_rate;
   /* Declare data member interest_rate */
}; // end class SavingsAccount

#endif
