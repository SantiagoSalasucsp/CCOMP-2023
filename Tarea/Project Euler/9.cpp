#include <iostream>
using namespace std;
int main() {


int n;
int x;
int b;
int z;
int g;
int f;

for(x=1;x<=1000;x++)
  {for(n=1;n<=1000;n++)
    {for(z=1;z<=1000;z++)
      {if((x*x)+(n*n)==(z*z))
        {if(x+n+z==1000)
        {cout<<x<<"|"<<n<<"|"<<z<<endl;
          cout<<"la respuesta es"<<(x*n*z);}}}}}
    
  
  
}