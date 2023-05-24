#include <iostream>
#include <string> 
#include <stdexcept>
#include <iomanip>



#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"


using namespace std;



BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& fir, const string& last, const string& segu, double p, double x, double baseSalary):CommissionEmployee(fir,last,segu, p,x)
{
   
    this->baseSalary=baseSalary;
    setBaseSalary(baseSalary);
    
} 



double BasePlusCommissionEmployee::getBaseSalary(){

    return baseSalary;
}

void BasePlusCommissionEmployee::setBaseSalary(double baseSalary){
    if (baseSalary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }
    this->baseSalary=baseSalary;
}

void BasePlusCommissionEmployee::Print(){
    cout<<lastName<<endl<<
    firstName<<endl
    <<"Su salario base es: "<<baseSalary<<endl;

}

