#include <iostream>

using namespace std;

void almacenar_elementos(int arr[], int tam, int* x, int i) {
    if (i < tam) {
        *x++ = arr[i];
        almacenar_elementos(arr, tam, x, i+1);
    }
}

void Print(int arreglo[], int tam){
    cout<<"[";
    for (int y=0; y<tam; y++){
        cout<<arreglo[y]<<",";
    }
    cout<<"]";
}

void incert(int arr[], int size, int num){
    int array[size+1];
    for(int y=0;y<size;y++){
        array[y]=arr[y];
    }
    array[size]=num;
    Print(array,size+1);
    arr=array;
}

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

bool CambioRec(int arr[],int size){
    int y=0;
    if(y==size){
        int res=arr[y];
        cout<<"EL actual de res: "<<res<<endl;
        int x=size-y-1;
        cout<<"x: "<<x<<endl;
        arr[y]=arr[x];
        cout<<"El valor de y es: "<<arr[y]<<endl;
        arr[x]=res;
        cout<<"El valor ahora es: "<<arr[y]<<endl;
    }
    else
        Cambio(arr,size-1);
}


void invertirRec(int arr[], int inicio, int fin) {
    if (inicio < fin) {
        // Intercambiar los elementos
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;

        // Llamar a la función recursivamente con los elementos restantes
        invertirRec(arr, inicio+1, fin-1);
    }
}





int main(){
    const static int x=3;
    int array[]={1,2,3};
    //bool x=EsPaliRec(array,x);
    //CambioRec(array,x);
    //cout<<x<<endl; 
    //Print(array,x); 

    invertirRec(array,0,2);
    Print(array,3);
 






}