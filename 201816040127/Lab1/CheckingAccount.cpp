#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double initialBalance,double fee)
           :Account(initialBalance)
{
    if(transactionFee>=0)
    {
        transactionFee = fee;
    }
    else
    {
        transactionFee=0;
        cout<<" This is Unvalid input! TransactionFee must be greater than 0"<<endl;
    }

}
// Write the CheckingAccount constructor to call the Account constructor and validate and set the transaction fee value

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit(double amount)
{
    Account::credit(amount);
    chargeFee();
}

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
    if(Account::debit(amount)==true)
    {
        chargeFee();
    }
    else
    {
        cout<<"It's wrong!"<<endl;
    }
} // end function debit

// subtract transaction fee
void CheckingAccount::chargeFee()
{
    setBalance(getBalance()- transactionFee);
    cout<<" TransactionFee: "<<endl;
}
