// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
   CheckingAccount::CheckingAccount(double a,double b)
   :Account(a)
   {
       if(b>0.0)
       {
            transactionFee=b;
       }
       else
        throw invalid_argument("Input Error");
   }

// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
   void CheckingAccount::credit(double a)
   {
       setBalance(getBalance()+a);
       chargeFee();
   }

// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
   bool CheckingAccount::debit(double a)
   {
       if(getBalance()-a-transactionFee>=0)
       {
           return true;
       }
       else
       {
           return false;
       }
   }

// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
   void CheckingAccount::chargeFee()
   {
       setBalance(getBalance()-transactionFee);
       cout<<"$1.00 transaction fee charged."<<endl;
   }


