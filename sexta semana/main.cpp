#include <iostream>
#include <array>
#include <vector>
#include <random>
using namespace std;


int SumaArray(array<int,5>array ){
    int suma=0;
    for ( size_t j=0 ; j<array.size() ; j++){
        suma+=array[j];
        cout<<"la suma es: "<<suma <<endl;
    }
}

void PrintArray(array<int,5>array){

    for ( size_t j=0 ; j<array.size() ; ++j){
        cout<< j <<"----"<<array[j]<<endl;
    }

}

/*void CambiarValores(array<int,5>array,int g, int j, int y, int j, int k){
    for(size_t j=0 ; j<array.size() ; j++){
        array[j]=g;
    }
}
*/

int main(){

    const size_t u{5};

    array<int, u> arreglo{10,20,30,40,50};

    cout<<SumaArray(arreglo)<<endl;

    PrintArray(arreglo);

    
    

    
   



}