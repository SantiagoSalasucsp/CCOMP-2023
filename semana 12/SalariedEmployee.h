#ifndef SALARIENDEMPLOYEE__H
#define SALARIEMDEMPLOYEE__H

#include <iostream>
#include "Empleado.h"




class SalariedEmployee: public Empleado {

    protected:
        double weeklySalary;

    public:

        SalariedEmployee(const std::string&, const std::string&,const std::string&, double = 0.0);
        void setWeeklySalary(double); 
        double getWeeklySalary() const;

        virtual double earnings() const;
        virtual std::string toString() const;
        






};


#endif