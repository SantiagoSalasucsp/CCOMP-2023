#include <string> 

#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <iostream> 

using namespace std;



class CommissionEmployee{

    public:

        CommissionEmployee(const string&, const string&, const string&, double=0.0, double=0.0);

        void setFirstName(string&);
        string getFirstName();

        void setLastName( string&);
        string getLastName();

        void setSocialSgurityNumber(string &);
        string getSoccialSegurityNumber();

        void setGrossSales(double);
        double getGrossSales();

        void setCommissionRate(double);
        //double getCommissionRate();



     


        double earnings();
        string toString();

        void Print();




    protected:
        string firstName;
        string lastName;
        string socialSecurityNumber;
        double grossSales;
        double commissionRate;
        

};


#endif
