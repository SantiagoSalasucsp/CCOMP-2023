#include <iostream>
#include "Estructura.h"
#include <string> 




Estructuras::Estructuras(string* notas,int tam){
    this->notas=notas;
    this->tam=tam;
}


void Estructuras::tono(int &x){
   x+=2;
  
}
void Estructuras::semitono(int &y){
   y+=1;
}

void Estructuras::derecha(int &x){
      if((x+1)==12)
        x=-1;
      if((x+2)==12)
        x=-2;
      if((x+2)==13)
        x=-2;
}


