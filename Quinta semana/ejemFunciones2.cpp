#include <iostream>

using namespace std;



bool esCharater(char x){
    return ((x>=65 && x<=95) ||  (x>=97 && x<=122));
}

int main(){

    cout<<"Ingrese un char: "<< endl;
    char x;

    cin>>x;

    cout<<esCharater(x);
}