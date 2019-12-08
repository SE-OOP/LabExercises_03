// Lab 2: BasePlusCommissionEmployee.cpp
// Member-function definitions of class BasePlusCommissionEmployee
// using composition.
#include <iostream>
using namespace std;
// BasePlusCommissionEmployee class definition
#include "BasePlusCommissionEmployee.h"
#include"CommissionEmployee.h"
// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   const string &first, const string &last, const string &ssn,
   double sales, double rate, double salary ):employee(first,last,ssn,sales,rate)
   // initialize composed object

{
   setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set commission employee's first name
void BasePlusCommissionEmployee::setFirstName( const string &first )
{
   employee.setFirstName(first);
} // end function setFirstName

// return commission employee's first name
string BasePlusCommissionEmployee::getFirstName() const
{
   return employee.getFirstName();
} // end function getFirstName

// set commission employee's last name
void BasePlusCommissionEmployee::setLastName( const string &last )
{
   employee.setLastName(last);
} // end function setLastName

// return commission employee's last name
string BasePlusCommissionEmployee::getLastName() const
{
   return employee.getLastName();
} // end function getLastName

// set commission employee's social security number
void BasePlusCommissionEmployee::setSocialSecurityNumber(
   const string &ssn )
{
   employee.setSocialSecurityNumber(ssn);
} // end function setSocialSecurityNumber

// return commission employee's social security number
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
   return employee.getSocialSecurityNumber();
} // end function getSocialSecurityNumber

// set commission employee's gross sales amount
void BasePlusCommissionEmployee::setGrossSales( double sales )
{
   employee.setGrossSales(sales);
} // end function setGrossSales

// return commission employee's gross sales amount
double BasePlusCommissionEmployee::getGrossSales() const
{
   return employee.getGrossSales();
} // end function getGrossSales

// set commission employee's commission rate
void BasePlusCommissionEmployee::setCommissionRate( double rate )
{
   employee.setCommissionRate(rate);
} // end function setCommissionRate

// return commission employee's commission rate
double BasePlusCommissionEmployee::getCommissionRate() const
{
   return employee.getCommissionRate();
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
   return getBaseSalary() +employee.earnings();
} // end function earnings

// print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print() const
{
   cout << "base-salaried ";
   // invoke composed CommissionEmployee object's print function
   employee.print();
   cout << "\nbase salary: " << getBaseSalary();
} // end function print
