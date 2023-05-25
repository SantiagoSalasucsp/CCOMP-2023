#include <iostream>
#include <string>
#include "CommissionEmployee.h"

#include "BasePlusCommissionEmployee.h"

using namespace std;


int main(){

    string g="Hola";
    string j="Jones";
    string l="222.22.222";

    CommissionEmployee e1("Santiago","Salas","23432" ,10000.0, 0.06);


    BasePlusCommissionEmployee e2(g,j,l,100,0.2,10);


    CommissionEmployee* ComPtr=&e1;

    BasePlusCommissionEmployee* PlusPtr=&e2;


    cout<<"------sin punteros------"<<endl;
    e1.Print();
    e2.Print();
    cout<<endl;
    
    cout<<"------Con punteros------"<<endl;
    ComPtr->Print();
    PlusPtr->Print();

    
    





}


// downcasting= cuando un puntero de la clase base apunta a una derivada 
