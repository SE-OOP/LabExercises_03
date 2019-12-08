#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h"

class SavingsAccount : public Account
{
public:
   // constructor initializes balance and interest rate
   /* Declare a two-parameter constructor for SavingsAccount */
    SavingsAccount ( double , double );
   /* Declare member function calculateInterest */
   double calculateInterest() ;
private:
   /* Declare data member interestRate */
   double interestRate;
}; // end class SavingsAccount

#endif
