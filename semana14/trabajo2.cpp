#include <iostream>
#include <vector>
#include <string>

using namespace std;

void suma(int &x, int y){
    x=x+y;
    
}

void *punfun(&int,int){
    punfun=suma
}


int main(){

    cout<<"Si funciona"<<endl;

    int x=0;
    int y=5;


   

    punfun(x,y);

    cout<<"x es: "<<x<<endl<<"y es: "<<y;

    //vector<punfun>vec;




  


}