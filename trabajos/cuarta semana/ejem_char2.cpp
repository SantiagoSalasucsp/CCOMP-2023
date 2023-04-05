#include <iostream>

using namespace std;

int main(){

char x;
char y;


cout<<"Ingrese el primer caracter: ";
cin>>x;
cout<<"Ingrese el segundo caracter: ";
cin>>y;


int val1=static_cast<int>(x);
int val2=static_cast<int>(y);

if ((val1>=48 || val1<=57) && (val2<=48 || val2>=57) ){

    cout<<(val1-'0')+(val2-'0')<<endl;





}
cout<<(val1-'0')+(val2-'0')<<endl;





}