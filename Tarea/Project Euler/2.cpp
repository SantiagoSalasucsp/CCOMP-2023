#include <iostream>
using namespace std;
int main() {


long long n;
long long x;
long long b=0;
long long z;
long long g;
long long f;


x=0;
n=1;



while (n<=400000||x<=400000||z<=400000||g<=400000)
  {
    
  
    {z=n+x;
      cout<<z<<endl;}
    if (z%2==0)
      {b=b+z;}
  
    {g=z+n;
      cout<<g<<endl;}
    if (g%2==0)
      {b=b+g;}
  
    {x=g+z;
      cout<<x<<endl;}
    if (x%2==0)
      {b=b+x;}
  
    {n=x+g;
      cout<<n<<endl;}
    if (n%2==0)
      {b=b+n;}
    
  
  
  
  }
  cout<<"La respuesta deñl segundo ejercico es:"<<b;
 
  }
