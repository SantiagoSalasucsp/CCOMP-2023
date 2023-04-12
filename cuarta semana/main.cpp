#include <iostream>

using namespace std;

int main(){

    int num1=1;
    int num2=1;
    int x;
    int f;
    int res;
    int m=1;


    cout<<"Ingrese un numero: "<<endl;

    cin>>x;

    /*for (m=1;m<x;m++){

        f=num1+num2;
        num1=num2;
        num2=f;
    }
    */

while(m<x){
    f=num1+num2;
    num1=num2;
    num2=f;
    m++;
}

    cout<<f;










    return 0;
}