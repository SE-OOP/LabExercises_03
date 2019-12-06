// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(const double &balance,const double transaction )
                      :Account(balance),transactionFee(transaction)
{
   transactionFee=transaction;
}/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit(double value)
{
    Account::debit(transactionFee);
    Account::credit(value);
}/* Write the credit member function to call Account's credit function
   and then charge a fee */

// debit (subtract) an amount from the account balance and charge fee
void CheckingAccount::debit(const double values)
{
        if(Account::debit(values))
               {
                     cout<<"$"<<transactionFee<<" transaction fee charged."<<endl;
                     Account::debit(transactionFee);
               }
        else
            cout << "Debit amount exceeded account balance." << endl;
}/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/

// subtract transaction fee
void CheckingAccount::chargeFee()
{
     cout<<Account::getBalance()<<endl;
}/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
