#include <iostream>

#include <string>
using namespace std;


int main(){

    string num;
    int x=0;
    cout<<"Ingrese numeros: "<<endl;
    cin>>num;


int k;

    for(int c=0;c<num.length();c++){

        

        k=num.at(c);
        


        x+=(k-'0');
        cout<<x<<endl;


    }
    //cout<<num<<endl;
    //cout<<x<<endl;






}