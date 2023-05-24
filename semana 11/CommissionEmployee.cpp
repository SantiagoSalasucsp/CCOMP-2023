#include <iostream>
#include "CommissionEmployee.h"
#include <string> 
#include <stdexcept>
#include <iomanip>




using namespace std;


CommissionEmployee::CommissionEmployee(string& firstName, string& lastName, string& socialSecurityNumber, double grossSales, double commissionRate, double baseSalary )
{
    this->firstName=firstName;
    this->lastName=lastName;
    this->socialSecurityNumber=socialSecurityNumber;
    this->grossSales=grossSales;
    this->commissionRate=commissionRate;
    this->baseSalary=baseSalary;






}







void CommissionEmployee::setFirstName(string& firstName) {
    this->firstName = firstName; 
}


string CommissionEmployee::getFirstName(){
    return firstName;
}


void CommissionEmployee::setLastName(string& lastName) {
this->lastName = lastName; 
}


string CommissionEmployee::getLastName(){
    return lastName;
}


void CommissionEmployee::setSocialSgurityNumber(string& socialSecurityNumber) {
    this->socialSecurityNumber = socialSecurityNumber; 
}


string CommissionEmployee::getSoccialSegurityNumber(){
    return socialSecurityNumber;
}


void CommissionEmployee::setGrossSales(double sales) {
    if (sales < 0.0) {
throw invalid_argument("Gross sales must be >= 0.0");
}

grossSales = sales;
}

double CommissionEmployee::getGrossSales(){
    return grossSales;
}


void CommissionEmployee::setCommissionRate(double rate) {
    if (rate <= 0.0 || rate >= 1.0) {
throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}

commissionRate = rate;
} 



double CommissionEmployee::getBaseSalary(){

    return baseSalary;
}

void CommissionEmployee::setBaseSalary(double baseSalary){
    if (baseSalary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }
    this->baseSalary=baseSalary;
}




