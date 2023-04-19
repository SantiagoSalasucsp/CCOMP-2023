#include <iostream>
using namespace std;

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

int main() {
int x;
int a;
int b;
int f;
int k;
int d;

int z;
int y;
int e;

/*for(e=100;e<1000;e++)
  {for(y=100;y<1000;y++)
    {z=y*e;
     x=z/100000;
     a=(z/10000)-(x*10);
     b=(z/1000)-((x*100)+(a*10));
     f=(z/100)-((x*1000)+(a*100)+(b*10));
     k=(z/10)-((x*10000)+(a*1000)+(b*100)+(f*10));
     d=(z/1)-((x*100000)+(a*10000)+(b*1000)+(f*100)+(k*10));}
    if ((x==d)&&(a==k)&&(b==f))
      {cout<<z<<endl;}
    }
*/

    int maximo=0;
    for(int x=100; x<1000;x++){
      for(int y=100;y<1000;y++){
        int u=x*y;
      if(Palindromo(u)){
        if(u>=maximo)
          maximo=u;
      }}

    }
    cout<<"El palindromo mas grande es: " <<maximo<<endl;

}