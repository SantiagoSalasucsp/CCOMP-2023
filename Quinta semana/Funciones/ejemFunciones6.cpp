#include <iostream>

using namespace std;

int FiboIterativo(int x){
    long long num1=1;
    long long num2=1;
    long long f;
    if(x==1 || x==0){
        return 1;
    }
    else{
    for(int y=1;y<x;y++){
        f=num1+num2;
        num1=num2;
        num2=f;
    }
    return num2;
    }
}

void Printfibo ( int x){
    for( int y=0;y<x;y++){
        cout<<FiboIterativo(y)<<endl;
    }
}



int main(){


    //cout<<FiboIterativo(9);
    Printfibo(50);






}
