#include <iostream>
#include <string> 
#include "Empleado.h"

using namespace std;

Empleado::Empleado(string& firstName, string& lastName, string& SocialSecurityNumber){
    this->firstName=firstName;
    this->lastName=lastName;
    this->socialSecurityNumber=SocialSecurityNumber;
}


void Empleado::setFirstName(const string& first) {firstName = first;}

string Empleado::getFirstName() const {return firstName;}

void Empleado::setLastName(const string& last) {lastName = last;}

string Empleado::getLastName() const {return lastName;}

void Empleado::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn;
}

string Empleado::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

string Empleado::toString() const {
    return getFirstName() + " "s + getLastName() +
    "\nsocial security number: "s + getSocialSecurityNumber();
}
