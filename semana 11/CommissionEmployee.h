#include <string> 

#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <iostream> 

using namespace std;



class CommissionEmployee{

    public:

        CommissionEmployee(string&, string&, string&, double=0.0, double=0.0, double = 0.0);

        void setFirstName(string&);
        string getFirstName();

        void setLastName(string&);
        string getLastName();

        void setSocialSgurityNumber(string &);
        string getSoccialSegurityNumber();

        void setGrossSales(double);
        double getGrossSales();

        void setCommissionRate(double);
        double getCommissionRate();



        void setBaseSalary(double);
        double getBaseSalary(); 




    protected:
        string firstName;
        string lastName;
        string socialSecurityNumber;
        double grossSales;
        double commissionRate;
        double baseSalary;

};


#endif
