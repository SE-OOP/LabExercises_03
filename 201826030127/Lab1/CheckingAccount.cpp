// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;
#include"Account.h"
#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double b,double f)
:   Account(b),transaccount(f)
    {

    }
// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double add)
{
    Account::credit(add);
    Account::debit(transaccount);
    CheckingAccount::chargefree();
}

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double down)
{
    if(getBalance()-down<0)
        return false;
    else
    {
         Account::debit(down);
        Account::debit(transaccount);
        CheckingAccount::chargefree();
        return true;
    }

}

// subtract transaction fee
void  CheckingAccount::chargefree()
{
    cout<<'$'<<transaccount<<"transcation fee charged"<<endl;
}
