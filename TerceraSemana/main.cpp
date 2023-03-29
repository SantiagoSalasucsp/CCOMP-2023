#include <iostream>
#include <string>
using namespace std;
#include "Account.h"


int main() {
    

    int x;
    cout<<"Ingrese su nombre: "<<endl;
   


    Account Cuenta1("Santiago Salas Sotillo");
    cout << "El Nombre de su cuenta es: "<< Cuenta1.getName();
    cout <<endl<< "Ingrese el nombre: ";

    

    /*string ElName;
    getline(cin, ElName);
    Cuenta1.setName(ElName);
    */
    cout << "El nombre de la cuenta es: "<< Cuenta1.getName()<< endl;

    cout<<"ingrese un monto: "<<endl;
    
    cin>>x;
    Cuenta1.ingresar(x);
    //Cuenta1.retirar(10);
    cout<<"El dinero que tiene actualemnte es: "<<endl;
    Cuenta1.mirar();






}