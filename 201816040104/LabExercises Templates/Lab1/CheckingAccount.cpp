// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
  CheckingAccount::CheckingAccount(double a,double b)
   :Account(a)
   {
       setTransactionFee(b);
   }

// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
   void CheckingAccount::credit(double amount)
   {
       double balancen;
    Account::credit(n);
    balancen=getBalance()-transactionFee;
    setBalance(balancen);
   }

// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
  bool CheckingAccount::debit( double amount )
{
   while ( amount > balance ) // debit amount exceeds balance
   {
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   } // end if
   while ( amount <=balance ) // debit amount does not exceed balance
   {
      return Account::balance+Account::debit(amount)-getTansactionFee();
      return true;
   } // end else
}
// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
   void CheckingAccount::setTransactionFee(double a)
   {
       while(a>=0)
       transactionFee=a;
        while(a<0)
        cout<<"transactionFee can't is negative number"<<endl;
   }
  double CheckingAccount::getTransactionFee()
  {
      return transactionFee;
  }
