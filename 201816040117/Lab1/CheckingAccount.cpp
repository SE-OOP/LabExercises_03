// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;
#include"Account.h"
#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee

CheckingAccount::CheckingAccount(double a,double b)
:Account(a)
{

    if(b>=0)
        transactionFee=b;
    else
    {
        transactionFee=0;
        cout<<"error in transaction fee";
    }


}
// credit (add) an amount to the account balance and charge fee

void CheckingAccount::credit(double c)
{
    setBalance(getBalance()+c);
    chargeFee();
}
// debit (subtract) an amount from the account balance and charge fee

void CheckingAccount::debit(double d)
{
    if(Account::debit(d))
        chargeFee();
}
// subtract transaction fee

void CheckingAccount::chargeFee()
{
    if(getBalance()>=transactionFee)
    {
        setBalance(getBalance()-transactionFee);
        cout<<"subtract transaction fee from balance";
    }
    else
        cout<<"don't subtract transaction fee from balance,balance is less than transaction fee";
}

