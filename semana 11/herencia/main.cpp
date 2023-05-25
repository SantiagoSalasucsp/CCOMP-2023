#include <iostream>
#include <string>
#include "CommissionEmployee.h"

#include "BasePlusCommissionEmployee.h"

using namespace std;


int main(){

    string g="Hola";
    string j="Jones";
    string l="222.22.222";

    CommissionEmployee employee{"Hola",j,l, 10000.0, 0.06};


    BasePlusCommissionEmployee e2(g,j,l,100,0.2,10);

    e2.Print();
    





}