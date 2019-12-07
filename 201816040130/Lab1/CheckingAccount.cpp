// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee

CheckingAccount::CheckingAccount(double initialBalance,double fee)
    :Account(initialBalance)
{
    if(fee >= 0)
   transactionFee = fee;
}
// credit (add) an amount to the account balance and charge fee

void CheckingAccount::credit(double amount)
{
    Account::credit(amount);
    chargeFee();
}

// debit (subtract) an amount from the account balance and charge fee

bool CheckingAccount::debit(double amount)
{
   bool a = Account::debit(amount);
   if(a)
   {
       chargeFee();
       return true;
   }
   else
    return false;
}

// subtract transaction fee

void CheckingAccount::chargeFee()
{
    Account::setBalance(getBalance() - transactionFee);
    cout << "The transactionFee is : " << transactionFee << endl;
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
