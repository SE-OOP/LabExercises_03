// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
   CheckingAccount::CheckingAccount( double initialBalance, double fee )
   : Account( initialBalance ) // initialize base class
{
   transactionFee = ( fee < 0.0 ) ? 0.0 : fee; // set transaction fee
} // end CheckingAccount constructor

// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
   void CheckingAccount::credit( double amount )
{
   Account::credit( amount ); // always succeeds
   chargeFee();
} // end function credit


// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
   bool CheckingAccount::debit( double amount )
{
   bool success = Account::debit( amount ); // attempt to debit

   if ( success ) // if money was debited, charge fee and return true
   {
      chargeFee();
      return true;
   } // end if
   else // otherwise, do not charge fee and return false
      return false;
} // end function debit


// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
   void CheckingAccount::chargeFee()
{
   Account::setBalance( getBalance() - transactionFee );
   cout << "$" << transactionFee << " transaction fee charged." << endl;
} // end function chargeFee
