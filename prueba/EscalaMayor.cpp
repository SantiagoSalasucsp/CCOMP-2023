#include <iostream>
#include <string>
#include "EscalaMayor.h"


EscalaMayor::EscalaMayor(string* notas, int tam, int pos): Estructuras(notas,tam){
    this->pos=pos;
}

void EscalaMayor::Print(){
  int k=pos;
  cout<<"___Escala Mayor___"<<endl;
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  semitono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  semitono(k);
  cout<<notas[pos]<<endl;
  
  cout<<"__________________"<<endl;

};