#include <iostream>

using namespace std;


int main(){

char c; 
short s; 
int i; 
long l; 
long long ll; 
float f; 
double d; 
long double ld; 
int array[20]; 
int* ptr{array}; 

char* pun;
pun=&c;

int* punt{&i};

short* puntero{&s};





// cout<<*pun;

cout<<"El sizeof del char es: "<<sizeof c<<endl;
cout<<"El sizeof del puntero es: "<<sizeof ptr<<endl;
cout<<"El sizeof del int es: "<<sizeof s<<endl;
cout<<"El sizeof del puntero es: "<<sizeof ptr<<endl;

cout<<"El sizeof del short es: "<<sizeof s<<endl;
cout<<"El sizeof del puntero es: "<<sizeof puntero<<endl;



}