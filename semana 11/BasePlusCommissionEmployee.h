#include <string> 

#ifndef BASEPLUSCOMMISSIONEMPLOYE_H
#define BASEPLUSCOMMISSIONEMPLOYE_H

#include <iostream> 
#include "CommissionEmployee.h"

using namespace std;



class BasePlusCommissionEmployee : public CommissionEmployee {

    public:

        BasePlusCommissionEmployee(const string&, const string&, const string&, double=0.0, double=0.0, double = 0.0);

        


        double earnings();
        string toString();


        void setBaseSalary(double);
        double getBaseSalary(); 
        void Print();
        




    protected:
        double baseSalary;

};


#endif