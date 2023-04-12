#include <iostream>
#include <string>

using namespace std;

bool EsNum(char x){
    return ((x>=48 && x<=57));
}

int contarDigitos(string cad){

    int cont=0;
    for (int y=0;y<cad.length();y++){
        if(EsNum(cad.at(y))){
            cont++;
        }
    }

    return cont;
    
}

int main(){


    cout<<"Ingrese una palabra: ";
    
    string g;
    getline(cin, g);

    cout<<contarDigitos(g);






}