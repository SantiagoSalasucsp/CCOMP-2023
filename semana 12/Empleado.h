#ifndef EMPLEADO__H
#define EMPLEADO__H

#include <iostream>
#include <string>



class Empleado {

    protected:

    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;

    public:

    Empleado(std::string&, std::string&, std::string&);
    virtual ~Empleado()= default; 

    void setFirstName(const std::string&); 
    std::string getFirstName() const; 

    void setLastName(const std::string&); 
    std::string getLastName() const; 

    void setSocialSecurityNumber(const std::string&); 
    std::string getSocialSecurityNumber() const; 

    virtual double earnings() const = 0;
    virtual std::string toString() const;
  





};

#endif