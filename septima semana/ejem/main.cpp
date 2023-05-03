#include <iostream>
#include <array>

using namespace std;


void PrintArray(array<int,5>array){

    for ( size_t j=0 ; j<array.size() ; ++j){
        cout<< j <<"----"<<array[j]<<endl;
    }

}

int main(){

    array<int,5> lista;


    for(int a=0;a<lista.size();++a){
        lista[a]=0;
    }


    PrintArray(lista);



}