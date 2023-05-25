#include <iostream>
#include <string>
#include "Estructura.h"
#include "EscalaMenor.h"


EscalaMenor::EscalaMenor(string* notas, int tam, int pos):Estructuras(notas,tam){
    this->pos=pos;
}

void EscalaMenor::Print(){
  int k=pos;
  cout<<"___Escala Menor___"<<endl;
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
  semitono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[pos]<<endl;
  cout<<"__________________"<<endl;

  }


