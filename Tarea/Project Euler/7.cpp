#include <iostream>
using namespace std;
int main() {


int n;
int x;
int b;
int z;
int g;
int f;
g=0;
cin>>z;
f=0;
for(n=2;n<=z;n++)
  {b=0;
    for(x=2;x<=z;x++)
    {if(n%x==0)
      b++;}
    if(b==1)
      {//cout<<n<<endl;
        f++;
      cout<<endl<<f<<"|"<<n;}}
  
  
  
}