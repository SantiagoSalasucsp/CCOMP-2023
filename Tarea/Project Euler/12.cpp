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



unsigned long long NumTri(unsigned long long x){
    unsigned long long y=0;

       
        for(int u=1;u<=x;u++){
            y+=u;
        }
        
    return y;

};

int multi(unsigned long long x){
    int multiplos=0;
    
    if(x<=10){
    for(int y=1;y<=x;y++){
      if(x%y==0){
        multiplos++;
      }
    }
    return multiplos;

  }

  else{
      for(int u=1;u<=(x/2);u++){
        if(x%u==0){
          multiplos++;}
        
      }
      return multiplos;

  }
}

int main(){

    /*int numero=0;

    unsigned long long k= NumTri(1000000000000);
    unsigned long long p=multi(1000000000);
    cout<<k<<endl;
    cout<<"Los multiplos de 1000000 es: "<<p<<endl;*/

    int maxi=0;
    unsigned long long j=1000000000000;
    unsigned long long o;
    o=NumTri(j);
    int l;


    for ( unsigned long long  u=1000000000000;l<=500; u++){

        l=multi(o);

        cout<<l<<endl;
      
     
        o+=u+1;

    }

       //1192
    cout<<"El numero es: "<<o<<endl;//2306164008140003809
    cout<<"Su posicion Es: "<<j<<endl;// 1000000000000




    }


    



