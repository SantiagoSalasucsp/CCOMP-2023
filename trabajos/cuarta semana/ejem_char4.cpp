#include <iostream>

#include <string>
using namespace std;


int main(){

    string num;
    int x=0;
    cout<<"Ingrese numeros: "<<endl;
    cin>>num;
int m;

    for(int c=0;c<num.length();c++){

        int k;

        k=num.at(c);

        x=k+x;


    }
    cout<<x<<endl;






}