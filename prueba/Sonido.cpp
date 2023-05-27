#include <iostream>
#include <windows.h>
#include "Sonido.h"


    Sonido::Sonido(){

    }

    void Sonido::Do(int& x){
        if(x==0){
            Beep(523,700);
        }
        if(x==12){ 
            Beep(1046,700);
        }
        if(x==24){
            Beep(2093,700);
        }
    }

    void Sonido::Reb(int& x){
        if(x==1){
            Beep(554,700);
        }
        if(x==13){
            Beep(1108,700);
        }
    }

    void Sonido::Re(int& x){
        if(x==2){
            Beep(587,700);
        }
        if(x==14){
            Beep(1174,700);
        }
    }


