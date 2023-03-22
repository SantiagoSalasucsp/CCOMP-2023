#include <iostream>
#include <string>
using namespace std;

int main(){

    int a;
    int b;
    int comparacion;
    string f;


    cout<<"ingrese su nombre: "<<endl;
    cin>>f;
    cout<<"ingrese su edad: ";
    cin>>a;
    if(a>=18){
        cout<<"Hola "<<f<<" eres mayor de edad";
    }
    else 
    {
        cout<<"Hola "<<f<<" eres menor de edad";
    }


return 0;
}