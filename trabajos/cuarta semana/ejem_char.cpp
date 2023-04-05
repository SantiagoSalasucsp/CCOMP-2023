#include <iostream>

using namespace std;


int main(){


char x;


cout<<"Ingrese un caracter: ";
cin>>x;

int val=static_cast<int>(x);

if((val>=65 && val<=90)||(val>=97 && val<=122)){

    cout <<"El caracter si es una letra"<<endl;


}

else 
    cout<<"El caracter ingresado no es un caracter"<<endl;


}