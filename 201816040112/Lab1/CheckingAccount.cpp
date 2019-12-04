#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
using namespace std;
// CheckingAccount class definition
CheckingAccount::CheckingAccount(double a,double b):Account(a)
{

    transactionFee=b;
}
void CheckingAccount::rcredit(double a)
{
    credit(a);
    chargeFee();

}

bool CheckingAccount::cdebit(double a)
{
    if(debit(a))
        {
         chargeFee();
         return true;
        }
    return false;
}

void CheckingAccount::chargeFee()
{
      setBalance(getBalance()-transactionFee);
}
