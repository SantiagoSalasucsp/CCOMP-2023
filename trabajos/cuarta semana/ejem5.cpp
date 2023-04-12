#include <iostream>
using namespace std;
int main() {


long long f=0;
int cont= 0;
long long  num=0;

  while(true){
    f++;
    for(int y=1;y<21;y++){
      if(f%y==0)
        cont++;
      else 
        continue;
    }
    if (cont==20){
      num=f;
      break;
    }
    else {
      cont=0;
    }

  }
  cout<<num<<endl;


  }