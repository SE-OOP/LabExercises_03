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
:a(first,last,ssn,sales,rate)
   // initialize composed object
   /* Initialize the commissionEmployee data member,
	    pass (first, last, ssn, sales, rate) to its constructor */
{
   setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set commission employee's first name
void BasePlusCommissionEmployee::setFirstName( const string &first )
{
   a.setFirstName(first);
   /* Call commissionEmployee's setFirstName function */
} // end function setFirstName

// return commission employee's first name
string BasePlusCommissionEmployee::getFirstName() const
{
    return a.getFirstName();
   /* Call commissionEmployee's getFirstName function */
} // end function getFirstName

// set commission employee's last name
void BasePlusCommissionEmployee::setLastName( const string &last )
{
   a.setLastName(last);
   /* Call commissionEmployee's setLastName function */
} // end function setLastName

// return commission employee's last name
string BasePlusCommissionEmployee::getLastName() const
{
    return a.getLastName();
   /* Call commissionEmployee's getLastName function */
} // end function getLastName

// set commission employee's social security number
void BasePlusCommissionEmployee::setSocialSecurityNumber(
   const string &ssn )
{
    a.setSocialSecurityNumber(ssn);
   /* Call commissionEmployee's setSocialSecurity function */
} // end function setSocialSecurityNumber

// return commission employee's social security number
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
    return a.getSocialSecurityNumber();
   /* Call commissionEmployee's getSocialSecurity function */
} // end function getSocialSecurityNumber

// set commission employee's gross sales amount
void BasePlusCommissionEmployee::setGrossSales( double sales )
{
   a.setGrossSales(sales);
   /* Call commissionEmployee's setGrossSales function */
} // end function setGrossSales

// return commission employee's gross sales amount
double BasePlusCommissionEmployee::getGrossSales() const
{
    return  a.getGrossSales();
   /* Call commissionEmployee's getGrossSales function */
} // end function getGrossSales

// set commission employee's commission rate
void BasePlusCommissionEmployee::setCommissionRate( double rate )
{
   a.setCommissionRate(rate);
   /* Call commissionEmployee's setCommissionRate function */
} // end function setCommissionRate

// return commission employee's commission rate
double BasePlusCommissionEmployee::getCommissionRate() const
{
    return a.getCommissionRate();
   /* Call commissionEmployee's getCommissionRate function */
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
   return getBaseSalary() +a.getCommissionRate()*a.getGrossSales();
      /* Call commissionEmployee's earnings function */;
} // end function earnings

// print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print() const
{
   cout << "base-salaried ";

   // invoke composed CommissionEmployee object's print function
   /* Call commissionEmployee's print function */
  a.print();
   cout << "\nbase salary: " << getBaseSalary();
} // end function print


