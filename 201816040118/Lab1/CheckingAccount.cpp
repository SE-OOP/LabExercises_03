#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
CheckingAccount::CheckingAccount(double initialBalance,double Fee)
  : Account(initialBalance)
{
    transactionFee=Fee;
}
// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
void CheckingAccount::credit(double amount)
{
    setBalance(Account::getBalance()+amount-transactionFee);
}
// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
void CheckingAccount::debit(double amount)
{
    if(Account::debit(amount+transactionFee))
    {
        setBalance(Account::getBalance());
    }
}
// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
double CheckingAccount::chargeFee()
{
    return Account::getBalance()-transactionFee;
}
