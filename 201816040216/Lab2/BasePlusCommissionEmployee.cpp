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
   :common(first,last,ssn,sales,rate)
                               /* Initialize the commissionEmployee data member,pass (first, last, ssn, sales, rate) to its constructor */
{
   setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set commission employee's first name
void BasePlusCommissionEmployee::setFirstName( const string &first )
{
   /* Call commissionEmployee's setFirstName function */
   common.setFirstName(first);
} // end function setFirstName

// return commission employee's first name
string BasePlusCommissionEmployee::getFirstName() const
{
   /* Call commissionEmployee's getFirstName function */
   return getFirstName();
} // end function getFirstName

// set commission employee's last name
void BasePlusCommissionEmployee::setLastName( const string &last )
{
   /* Call commissionEmployee's setLastName function */
   common.setLastName(last);
} // end function setLastName

// return commission employee's last name
string BasePlusCommissionEmployee::getLastName() const
{
   /* Call commissionEmployee's getLastName function */
   return getLastName();
} // end function getLastName

// set commission employee's social security number
void BasePlusCommissionEmployee::setSocialSecurityNumber(
   const string &ssn )
{
   /* Call commissionEmployee's setSocialSecurity function */
   common.setSocialSecurityNumber(ssn);
} // end function setSocialSecurityNumber

// return commission employee's social security number
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
   /* Call commissionEmployee's getSocialSecurity function */
   return common.getSocialSecurityNumber();
} // end function getSocialSecurityNumber

// set commission employee's gross sales amount
void BasePlusCommissionEmployee::setGrossSales( double sales )
{
   /* Call commissionEmployee's setGrossSales function */
   common.setGrossSales(sales);
} // end function setGrossSales

// return commission employee's gross sales amount
double BasePlusCommissionEmployee::getGrossSales() const
{
   /* Call commissionEmployee's getGrossSales function */
   return getGrossSales();
} // end function getGrossSales

// set commission employee's commission rate
void BasePlusCommissionEmployee::setCommissionRate( double rate )
{
   /* Call commissionEmployee's setCommissionRate function */
   common.setCommissionRate(rate);
} // end function setCommissionRate


double BasePlusCommissionEmployee::getCommissionRate() const
{
   /* Call commissionEmployee's getCommissionRate function */
   return getCommissionRate();
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
   return getBaseSalary() + common.earnings()
      /* Call commissionEmployee's earnings function */;
} // end function earnings

// print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print() const
{
   cout << "base-salaried ";

   // invoke composed CommissionEmployee object's print function
   /* Call commissionEmployee's print function */
   common.print();
   cout << "\nbase salary: " << getBaseSalary();
} // end function print
