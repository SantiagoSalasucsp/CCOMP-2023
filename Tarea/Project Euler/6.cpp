#include <iostream>
using namespace std;
int main() {


int n;
int x;
int b;
int z;
int g;
int f;
b=0;
g=0;

for(x=0;x<=100;x++)
  {b=b+(x*x);}
  cout<<b<<endl;

for(n=0;n<=100;n++)
  {g=g+n;}
cout<<(g*g)<<endl;

cout<<"la respuesta es:"<<((g*g)-b)<<endl;
  
  
  
}