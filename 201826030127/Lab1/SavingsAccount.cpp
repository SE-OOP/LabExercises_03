// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.
using namespace std;
#include "SavingsAccount.h" // SavingsAccount class definition
#include<iostream>
#include<stdexcept>
// constructor initializes balance and interest rate
 //SavingsAccount constructor to call the Account constructor
SavingsAccount::SavingsAccount(double  b,double  r)
 :   Account(b),rate(r)
 {

 }

   double SavingsAccount::calculateInterest()
   {
         double interest;
         interest=getBalance()*rate;
         return interest;

   }
