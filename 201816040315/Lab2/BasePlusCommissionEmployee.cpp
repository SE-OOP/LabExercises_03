// Lab 2: BasePlusCommissionEmployee.cpp
// Member-function definitions of class BasePlusCommissionEmployee
// using composition.
#include <iostream>
using namespace std;

// BasePlusCommissionEmployee class definition
#include "BasePlusCommissionEmployee.h"

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   const string &first, const string &last, const string &ssn,
   double sales, double rate, double salary )
   // initialize composed object
   :comm( first , last , ssn , sales,rate) /* Initialize the commissionEmployee data member,
	    pass (first, last, ssn, sales, rate) to its constructor */
{
   setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set commission employee's first name
void BasePlusCommissionEmployee::setFirstName( const string &first )
{
   /* Call commissionEmployee's setFirstName function */
   comm.setFirstName(first);//set first name
} // end function setFirstName

// return commission employee's first name
string BasePlusCommissionEmployee::getFirstName() const
{
   /* Call commissionEmployee's getFirstName function */
   return comm.getFirstName();//retrieve first name
} // end function getFirstName

// set commission employee's last name
void BasePlusCommissionEmployee::setLastName( const string &last )
{
   /* Call commissionEmployee's setLastName function */
   comm.setLastName(last);//set last name
} // end function setLastName

// return commission employee's last name
string BasePlusCommissionEmployee::getLastName() const
{
   /* Call commissionEmployee's getLastName function */
   return comm.getLastName();//retrieve last name
} // end function getLastName

// set commission employee's social security number
void BasePlusCommissionEmployee::setSocialSecurityNumber(
   const string &ssn )
{
   /* Call commissionEmployee's setSocialSecurity function */
   comm.setSocialSecurityNumber(ssn);//set ssn
} // end function setSocialSecurityNumber

// return commission employee's social security number
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
   /* Call commissionEmployee's getSocialSecurity function */
   return comm.getSocialSecurityNumber();//retrieve ssn
} // end function getSocialSecurityNumber

// set commission employee's gross sales amount
void BasePlusCommissionEmployee::setGrossSales( double sales )
{
   /* Call commissionEmployee's setGrossSales function */
   comm.setGrossSales(sales);//set sales
} // end function setGrossSales

// return commission employee's gross sales amount
double BasePlusCommissionEmployee::getGrossSales() const
{
   /* Call commissionEmployee's getGrossSales function */
   return comm.getGrossSales();//retrieve sales
} // end function getGrossSales

// set commission employee's commission rate
void BasePlusCommissionEmployee::setCommissionRate( double rate )
{
   /* Call commissionEmployee's setCommissionRate function */
   comm.setCommissionRate(rate);//set rate
} // end function setCommissionRate

// return commission employee's commission rate
double BasePlusCommissionEmployee::getCommissionRate() const
{
   /* Call commissionEmployee's getCommissionRate function */
   return comm.getCommissionRate();//retrieve rate
} // end function getCommissionRate

// set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
   baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
} // end function setBaseSalary

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
   return baseSalary;
} // end function getBaseSalary

// calculate earnings
double BasePlusCommissionEmployee::earnings() const
{
   return getBaseSalary() +
      comm.earnings()/* Call commissionEmployee's earnings function */;
} // end function earnings

// print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print() const
{
   cout << "base-salaried ";

   // invoke composed CommissionEmployee object's print function
   /* Call commissionEmployee's print function */
   comm.print();
   cout << "\nbase salary: " << getBaseSalary();
} // end function print


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
