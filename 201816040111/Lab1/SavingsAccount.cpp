
#include "SavingsAccount.h" // SavingsAccount class definition

SavingsAccount::SavingsAccount( double x , double y )
:Account ( x ) , interestRate( y )
{

}

double SavingsAccount::calculateInterest()
{
    return getBalance() * interestRate ;
}
