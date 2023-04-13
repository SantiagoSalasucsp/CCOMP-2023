#include <iostream>

using namespace std;


int FiboRecursivo(int x){

    if(x==0 || x==1){
        return 1;
    }
    else 
        return FiboRecursivo(x-2)+FiboRecursivo(x-1);
}

void RecFibo( int x){
    for(int y =0;y<=x;y++){
        cout <<FiboRecursivo(y)<<endl;
    }
}



int main(){

    RecFibo(4);





}