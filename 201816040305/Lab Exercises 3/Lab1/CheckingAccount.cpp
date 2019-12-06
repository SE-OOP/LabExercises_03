// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double Balance , double fee):Account( Balance)
{
    transactionFee = fee ;
}


// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
   void CheckingAccount::credit( double amount )
{
    double Balance ;
    Balance = Account::getBalance() ;
   Balance = Balance + amount ;
    Account::setBalance(Balance);

    chrageFee();
    //cout<<"$"<<transactionFee<<"transaction fee charged"<<endl ;
  // add amount to balance

}

// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
bool CheckingAccount::debit( double amount )
{
    double Balance ;
    Balance = Account::getBalance() ;
   if ( amount > Balance ) // debit amount exceeds balance
   {
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   } // end if
   else // debit amount does not exceed balance
   {
      Balance = Balance - amount;
     Account::setBalance(Balance);
        //cout<<"$"<<transactionFee<<"transaction fee charged"<<endl ;
        chrageFee();
      return true;
   } // end else
}
// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
   void CheckingAccount::chrageFee()
  {
        double Balance ;
        Balance = Account::getBalance() ;
         Balance = Balance - transactionFee ;
        cout<<"$"<<transactionFee<<"transaction fee charged"<<endl ;
        Account::setBalance(Balance);
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
