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
   :e(first, last, ssn, sales,  rate) /* Initialize the commissionEmployee data member,
	    pass (first, last, ssn, sales, rate) to its constructor */
{
    setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set commission employee's first name
void BasePlusCommissionEmployee::setFirstName( const string &first )
{
    e.setFirstName(first) ;
   /* Call commissionEmployee's setFirstName function */
} // end function setFirstName

// return commission employee's first name
string BasePlusCommissionEmployee::getFirstName() const
{
   return e.getFirstName() ;
   /* Call commissionEmployee's getFirstName function */
} // end function getFirstName

// set commission employee's last name
void BasePlusCommissionEmployee::setLastName( const string &last )
{
    e.setLastName (last) ;
   /* Call commissionEmployee's setLastName function */
} // end function setLastName

// return commission employee's last name
string BasePlusCommissionEmployee::getLastName() const
{
   return  e.getLastName() ;
   /* Call commissionEmployee's getLastName function */
} // end function getLastName

// set commission employee's social security number
void BasePlusCommissionEmployee::setSocialSecurityNumber(
   const string &ssn )
{
    e.setSocialSecurityNumber (ssn) ;
   /* Call commissionEmployee's setSocialSecurity function */
} // end function setSocialSecurityNumber

// return commission employee's social security number
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
   return  e.getSocialSecurityNumber () ;
   /* Call commissionEmployee's getSocialSecurity function */
} // end function getSocialSecurityNumber

// set commission employee's gross sales amount
void BasePlusCommissionEmployee::setGrossSales( double sales )//总销售额
{
    e. setGrossSales (sales) ;
   /* Call commissionEmployee's setGrossSales function */
} // end function setGrossSales

// return commission employee's gross sales amount
double BasePlusCommissionEmployee::getGrossSales() const
{
   return  e.getGrossSales() ;
   /* Call commissionEmployee's getGrossSales function */
} // end function getGrossSales

// set commission employee's commission rate
void BasePlusCommissionEmployee::setCommissionRate( double rate ) //收益率
{
    e.setCommissionRate (rate) ;
   /* Call commissionEmployee's setCommissionRate function */
} // end function setCommissionRate

// return commission employee's commission rate
double BasePlusCommissionEmployee::getCommissionRate() const
{
   return  e.getCommissionRate() ;
   /* Call commissionEmployee's getCommissionRate function */
} // end function getCommissionRate

// set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )//基本工资
{
   baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
} // end function setBaseSalary

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
   return baseSalary;
} // end function getBaseSalary

// calculate earnings
double BasePlusCommissionEmployee::earnings() const//总收益
{
   return getBaseSalary() +e.earnings() ;
      /* Call commissionEmployee's earnings function */;
} // end function earnings

// print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print() const
{
   cout << "base-salaried ";
    e.print() ;

   // invoke composed CommissionEmployee object's print function
   /* Call commissionEmployee's print function */

   cout << "\nbase salary: " << getBaseSalary();
} // end function print
