#include <iostream>
using namespace std;

int incrementoPorValor(int y){

    
    y++;
    cout<<"Y dentro de la funcion vale: " << y<<endl;
}

int IncrementoPorReferencia(int &y){
    y++;
    cout<<"Dentro de la funcion vale: "<<y<<endl;
}





int main(){

    int y=3;
    IncrementoPorValor(y);
    //cout<<incrementoPorValor(y)<<endl;
    cout<<"La Y en el main vale: "<<y<< endl;

    





}