#include <iostream>
#include "CreateAndDestroy.h" 

using namespace std;



void create() {
    cout<<"comienza la ejecucion"<<endl;

    CreateAndDestroy quinto(5, "(local in create)");
    static CreateAndDestroy sexto(6, "(local static in create)");
    CreateAndDestroy seventh{7, "(local in create)"};
    cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;




}



CreateAndDestroy Primero(1, "(global before main)");

int main(){



CreateAndDestroy Segundo(2, "(local in main)");

static CreateAndDestroy Tercero(3, "(local static in main)");

create();


CreateAndDestroy cuarto{4, "(local in main)"};






}