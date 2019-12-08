class CheckingAccount:public Account/* Write a line to have class CheckingAccount inherit publicly from Account */
{
public:
   // constructor initializes balance and transaction fee
   /* Declare a two-argument constructor for CheckingAccount */
    CheckingAccount(double ,double );
    void rcredit(double);
   /* Redeclare member function credit, which will be redefined */
    bool cdebit(double);
   /* Redeclare member function debit, which will be redefined */
private:
   /* Declare data member transactionFee */
    double transactionFee;
   // utility function to charge fee
    void chargeFee();
   /* Declare member function chargeFee */
}; // end class CheckingAccount
