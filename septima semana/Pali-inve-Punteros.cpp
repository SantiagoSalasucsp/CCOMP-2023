#include <iostream>

using namespace std;




//Palindromo iterativo-Recuersivo, con punteros

bool Palindromo(int*ini, int tam){

    int *fin = (ini+(tam-1));

    while(ini<fin){
        if(*ini!=*fin){
            return false;
        }
    ini++;
    fin++;
    }
    return true;
}

bool PaliRec(int*ini, int*fin){
    if(ini>fin)
        return 1;
    if(*ini != *fin)
        return false;
    return PaliRec(ini+1,fin-1);
}






//intercambio


void intercambio(int &a, int &b){
    int tam=a;
    a=b;
    b=tam;
}

void invertirRec(int*ini, int*fin){
    if(ini>=fin){
        return;
    }
    intercambio(*ini, *fin);
    invertirRec(++ini,--fin);
}

void intercambioPun(int*a,int*b){
    int tam=*a;
    *a=*b;
    *b=tam;
}


void intercambio(int*ini,int tam){
    int*fin=(ini+(tam-1));

    while(ini<fin){
        intercambioPun(ini,fin);
        ini++;
        fin--;
    }

}


void Print(int*a, int tam){
    cout<<"[";
    for( int o=0; o<tam;o++){
        cout<<*(a+o)<<",";
    }
    cout<<"]";
}

int main(){


    int arr[]={1,2,3,4,5};
    int tam=sizeof(arr)/sizeof(arr[0]);
    intercambio(arr,5);
    Print(arr,tam);
    //int*fin=arr+tam-1;

    










}