#include <iostream>
#include <string>
using namespace std;


int main(){


    string cadena;

    cout<<"Ingrese una palabra: ";
    cin>>cadena;

    char p;
    cin>>p;

    int cont1=0;



    


    for(int c=0;c<cadena.length();c++){
        
        char k;
        k=cadena.at(c);
        if( k==p ){
        
        cont1++;}


    }

    cout<<"Esta letra se repite: "<<cont1<<endl;

    








}