// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

CheckingAccount::CheckingAccount( double x , double y )
:Account( x ),transactionFee ( y )
{

}

void CheckingAccount::credit( double a )
{
    chargeFee();
    Account::credit( a );
   setBalance( getBalance() - transactionFee );
}

void CheckingAccount::debit( double a )
{
    chargeFee();
    Account::debit( a );
   setBalance( getBalance() - transactionFee );
}

void CheckingAccount::chargeFee()
{
    cout << "$" << transactionFee << " transaction fee charged." << endl;
}
