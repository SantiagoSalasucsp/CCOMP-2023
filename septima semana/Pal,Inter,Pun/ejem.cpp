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








/*void almacenar_elementos(int arr[], int tam, int* x, int i) {
    if (i < tam) {
        *x++ = arr[i];
        almacenar_elementos(arr, tam, x, i+1);
    }
}
*/

void Print(int arreglo[], int tam){
    cout<<"[";
    for (int y=0; y<tam; y++){
        cout<<arreglo[y]<<",";
    }
    cout<<"]";
}

/*void incert(int arr[], int size, int num){
    int array[size+1];
    for(int y=0;y<size;y++){
        array[y]=arr[y];
    }
    array[size]=num;
    Print(array,size+1);
    arr=array;
}
*/

bool Palindromo(int num){
  int original=num;
  int inverso = 0;
  while( num>0){
    inverso =(inverso *10) + (num %10);
    num/=10;
  }
  if (original==inverso)
    return 1;
  else
    return 0;
  
}


bool EsPali(int arr[],int size){
    int num=0;
    for ( int y=0; y<(size); y++){
        int u=arr[y];
        num= u+(num*10);
    }

    Palindromo(num);

}

/*bool EsPaliRec(int arr[], int size){
    int y=size;
    int suma=0;
    if(y==0){
        Cambio(arr,size);
    }
    else
        return EsPaliRec( arr, size-1);
}
*/


void Cambio(int arr[], int size){
    for(int y=0;y<size/2;y++){
        int res=arr[y];
        cout<<"EL actual de res: "<<res<<endl;
        int x=size-y-1;
        cout<<"x: "<<x<<endl;
        arr[y]=arr[x];
        cout<<"El valor de y es: "<<arr[y]<<endl;
        arr[x]=res;
        cout<<"El valor ahora es: "<<arr[y]<<endl;
    }
}




void invertirRec(int arr[], int ini, int fin) {
    if (ini < fin) {
        int res = arr[ini];
        arr[ini] = arr[fin];
        arr[fin] = res;

        invertirRec(arr, ini+1, fin-1);
    }
}


bool PalindromoRec(int arr[], int size){
    int inico=0;
    int fin=size-1;
    invertirRec(arr,inico, fin);
    EsPali(arr,size);

}





int main(){
    const static int x=6;
    int array[]={1,2,3,4,5,6};
    //bool x=EsPaliRec(array,x);
    //CambioRec(array,x);
    //cout<<x<<endl; 
    //Print(array,x); 

    invertirRec(array,0,5);
    Print(array,6);
 





}