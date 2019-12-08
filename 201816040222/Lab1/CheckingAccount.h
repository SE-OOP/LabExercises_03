#ifndef CHECKING_H
#define CHECKING_H

/* Write a directive to include the Account header file */
#include"Account.h"
/* Write a line to have class CheckingAccount inherit publicly from Account */
class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
    CheckingAccount(double ,double);/* Declare a two-argument constructor for CheckingAccount */
    double chargeFee();
    void credit(double);
    bool debit(double);/* Redeclare member function credit, which will be redefined */
    void setFee(double);/* Redeclare member function debit, which will be redefined */
private:
   /* Declare data member transactionFee */
   double transactionFee;
   // utility function to charge fee
   /* Declare member function chargeFee */
}; // end class CheckingAccount

#endif
