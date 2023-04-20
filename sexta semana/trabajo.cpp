#include <iostream>

using namespace std;



void insertion(int array[], int tam, int elm){

}




void ordenamiento( int array[],int tam){
    for (int x=0; x<tam; x++){
        for( int y=0; y<tam;y++){
            if(array[y]<array[y+1]){
                int res=array[y];
                array[y]=array[y+1];
                array[y+1]=res;
            }
        }
    }
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


bool EsPalindromoRec(int arreglo[], int tam){
    int array(tam);
    int numero=0;
    int tama=tam;
    for(int y=0; y<tam;y++){
        int def=tam-y;
        array[tama-y]=arreglo[y];
        
    }
    return 1;
    /*if(  Palindromo( numero)){
        return 1;
    }
    else 
    return 0;*/
        
}



void vueltaItera(int arreglo[], int tam){
    int res=0;
    for (int x=0;x<tam;x++){
        for(int y=0; y<(tam);y++){
            res=arreglo[y];
            arreglo[y]=arreglo[tam-y];
            arreglo[tam-y]=res;
        }        
    }    
}


void VueltaRec(int array[], int tam){
    int pos=tam;
    if (pos==0){

    }
}

void Print(int arreglo[], int tam){
    cout<<"[";
    for (int y=0; y<tam; y++){
        cout<<arreglo[y]<<",";
    }
    cout<<"]";
}


int main(){


    int array[]={1,2,3,2,1};
    int array1[]={1,2,3};
    int arra[]={0,1,2,3,4};

    //cout<<array[4]<<endl;

    //vueltaItera(arra,4);
   // Print(arra,5);




    int num=0;
    for(int y=4; y==0;y--){
        int u=array[4-y];
        num=(num*10)+(u);
        cout<<num<<endl;
        
    }
    cout<<endl<<num<<endl;

    cout<<endl;
    int o=EsPalindromoRec(array,4);
    //cout<<o;

    //ordenamiento(arra,4);
    //Print(arra,4);











}