#include <iostream>
using namespace std;
int main() {


int n;
int x;
int b;
int k;
unsigned long long z;
unsigned long long g;
int f;

g=  600851475143;

cin>>z;
for(n=2;n<=z;n++)
  {b=0;
    for(x=2;x<=z;x++)
    {if(n%x==0)
      b++;}
    if(b==1)
      {//cout<<n<<endl;
        f=n;
  if (g%f==0)
    {g=g/f;
      cout<<f<<endl;}
      }}
  
  
  
  
  }