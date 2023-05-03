#include <iostream>

using namespace std;



// palindromo en interativo y recuersivo
bool esPalRc( const int arr[], int ini, int fin){
    if(ini>=fin)
        return true;
    if(arr[ini] !=arr[fin])
        return 0;
    return esPalRc(arr, ini+1, fin-1);
}

bool esPaldi(const int arr[], const int tam){
    int ini=0;
    int fin =  tam-1;
    while(ini<fin){
        if(arr[ini++]!=arr[fin--])
            return false;
    
    }
    return true;

}



// Funciones para invertir los elementos de un arreglo


void Print(int arreglo[], int tam){
    cout<<"[";
    for (int y=0; y<tam; y++){
        cout<<arreglo[y]<<",";
    }
    cout<<"]";
}

void intercambio(int &a, int &b){
    int tam=a;
    a=b;
    b=tam;
}


void intercambioPun(int*a,int*b){
    int tam=*a;
    *a=*b;
    *b=tam;
}


void invertir(int arr[], const int tam){
    int ini=0;
    int fin= tam-1;
    while(ini<fin){
        intercambio(arr[ini++],arr[fin--]); 
    }
}

void invertirRec(int arr[],int tam,int ini=0){
    if(ini>tam-1)
        return;
    intercambio(arr[ini],arr[tam-1]);
    invertirRec(arr, tam-1,ini+1);
}


int main(){

    int arr[]={1,2,3,4,5};

    invertir(arr,5);
    invertirRec(arr,5);

    Print(arr,5);





}