#include <iostream>

using namespace std;

void intercambio(int &x, int &y){

    int tmp=x;
    x=y;
    y=tmp;
    cout<<"X tiene en la funcion valor: "<<x<<endl;
    cout<<"Y tiene en la funcion valor: "<<y<<endl;

}
int main(){


int x=10;
int y=20;

intercambio(x,y);
cout<<"X tiene en el main valor: "<<x<<endl;
cout<<"y tiene en el main valor: "<<y<<endl;






}