#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
   CheckingAccount::CheckingAccount(double balance,double fee):Account(balance)
   {
       setchargeFee(fee);
   }

// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
   void CheckingAccount::credit( double amount )
{

   cout<<"$"<<chargeFee<<"transaction fee charged"<<endl;
   balance = Account::getBalance()+amount-chargeFee;
} // end function credit

// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
  bool CheckingAccount::debit( double amount )
{
       if ( amount < getBalance() ) // debit amount exceeds balance
   {
       //return true;
      cout<<"$"<<chargeFee<<"transaction fee charged"<<endl;
      balance = getBalance() - amount-chargeFee;
      //Account::getBalance();
      return true;

   }
   else
   {
       cout << "Debit amount exceeded account balance." << endl;
      return false;

   }

} // end function debit

// subtract transaction fee
/*void CheckingAccount::subtract()
{
    balance=balance-chargeFee;

}*/
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */



void CheckingAccount::setchargeFee(double fee)
   {
       chargeFee=fee;
   }
