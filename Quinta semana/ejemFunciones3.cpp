#include <iostream>

using namespace std;

bool EsNum(char x){
    return ((x>=48 && x<=57));
}




int main(){
    char f;

    cout<< "Ingrese un char: "<<endl;
    cin>>f;

    cout<< EsNum(f);
}