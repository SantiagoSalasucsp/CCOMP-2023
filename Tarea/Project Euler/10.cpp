#include <iostream>
using namespace std;


bool Esprimo(int x){
  int multiplos =0;
  if(x<=10){
    for(int y=1;y<=x;y++){
      if(x%y==0){
        multiplos++;
      }
    }
    if(multiplos==2)
      return 1;
    
    else 
      return 0;
  }
  else{
    if(x%2==0 || x%3==0 || x%5==0){
      return 0;
    }
    else{
      for(int u=1;u<=(x/2);u++){
        if(x%u==0){
          multiplos++;}
        if(multiplos>=2){
          break;
        }
      }
      if(multiplos>=2)
        return 0;
      if(multiplos==1){
        return 1;
      }
      
    }
  }
}





int main() {

  long long  suma=0;
  int contador;
  long long j=2000000;

  for(int x=1;x<=j;x++){

    if(Esprimo(x))
      suma+=x;
    else 
      continue;
  }

  cout<<"La suma es:"<<suma<<endl;
  //142913828922

  
}