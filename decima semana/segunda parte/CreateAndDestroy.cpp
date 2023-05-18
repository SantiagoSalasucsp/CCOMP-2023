#include <iostream>
#include "CreateAndDestroy.h"

using namespace std;


CreateAndDestroy::CreateAndDestroy(int objeto, string mensaje){

this->objeto=objeto;
this->mensaje=mensaje;

cout<<"El objeto es: "<<objeto<<endl<<"El mensaje es: "<<mensaje<<endl;


}


CreateAndDestroy::~CreateAndDestroy(){
    cout << (objeto == 1 || objeto == 6 ? "\n" : "");

    cout << "Object " << objeto << " destructor runs "<<mensaje<<endl;
}