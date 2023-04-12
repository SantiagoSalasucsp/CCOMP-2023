#include <iostream>

using namespace std;

int FiboIterativo(int x){
    int num1=1;
    int num2=1;
    int f;
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



int main(){


    cout<<FiboIterativo(9);






}

