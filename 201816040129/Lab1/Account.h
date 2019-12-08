// Lab 1: Account.h
// Definition of Account class.
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account( double ); // constructor initializes balance//初始化余额
   void credit( double ); // add an amount to the account balance//向当前表示余额的数据成员加钱
   bool debit( double ); // subtract an amount from the account balance//从账户中取钱
   void setBalance( double ); // sets the account balance//余额
   double getBalance(); // return the account balance//余额
private:
   double balance; // data member that stores the balance//账户余额
}; // end class Account

#endif
