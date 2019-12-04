// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"/* Write a directive to include the Account header file */

class CheckingAccount :public Account/* Write a line to have class CheckingAccount inherit publicly from Account */
{
public:
   // constructor initializes balance and transaction fee
   CheckingAccount( double , double );/* Declare a two-argument constructor for CheckingAccount */

   void credit( double );/* Redeclare member function credit, which will be redefined */
   bool debit( double );/* Redeclare member function debit, which will be redefined */
private:
   double transactionFee;/* Declare data member transactionFee */

   // utility function to charge fee
   bool chargeFee( double );/* Declare member function chargeFee */
}; // end class CheckingAccount

#endif
