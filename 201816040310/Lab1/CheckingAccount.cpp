// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
CheckingAccount::CheckingAccount(double balance, double fee) : Account(balance)
{
    transactionFee = fee;
}
// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
void CheckingAccount::credit(double amount)
{
    Account::credit(amount);
    chargeFee();
}
// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
void CheckingAccount::debit(double amount)
{
    if ((amount + transactionFee) < getBalance())
    {
        Account::debit(amount);
        chargeFee();
        cout << "Debit " << amount << " successfully !" << endl;
    }
    else
    {
        cout << "Your account don't have enough balance !" << endl;
    }
}

// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
bool CheckingAccount::chargeFee()
{
    if (getBalance() < transactionFee)
    {
        cout << "Your balance is not enough to pay the TransactionFee" << endl;
        return false;
    }
    else
    {
        cout << "You have paid TransactionFee : " << transactionFee << endl;
        setBalance(getBalance() - transactionFee);
        return true;
    }
}

/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
