#include <string>
#include "Time.h"
#include <stdexcept>
#include <iomanip>
#include <sstream>




using namespace std;


Time::Time(int horas, int minutos, int segundos){
    setTime(horas, minutos, segundos);
}



void Time::setTime(int horas,int minutos, int segundos){

    if((horas>=0 && horas<=24) && (minutos>=0 && segundos<=60) && (segundos>=0 && segundos<=60)){
        this->horas=horas;
        this->minutos=minutos;
        this->segundos=segundos;
    }
    else {
        throw invalid_argument("Ryto sapo");
    }


}

string Time::toUniversalString() const{

    ostringstream output;
    output << setfill('0')<< setw(2) << horas << ":"<< setw(2) << minutos << ":" <<setfill('0')<< setw(2) << segundos;
    return output.str();

}

string Time::toStandardString() const{

    ostringstream output;
    output <<((horas==0 || horas==12) ? 12 : horas % 12) <<":"<<setfill('0')<<setw(2)<<minutos<<":"<<setfill('0')<<setw(2)<<segundos << (horas < 12 ? " AM" : " PM");
    return output.str();
}



void Time::sethoras(int horas) {
    if (horas >= 0 && horas < 24) {
    this->horas = horas;
    }
    else {
        throw invalid_argument("hour debe estar en 0-23");
    }
 } 

void Time::setminutos(int minutos) {
    if (minutos >= 0 && minutos < 60) {
    this->minutos = minutos;
    }
    else {
        throw invalid_argument("minutos deben estar en 0-59");
    }
 } 


 void Time::setsegundos(int segundos) {
    if (segundos >= 0 && segundos < 60) {
    this->segundos = segundos;
    }
    else {
        throw invalid_argument("segundos deben estar en 0-59");
    }
 }


 Time::~Time(){
    
 }
 



 unsigned int Time::gethoras() const {return horas;}
 unsigned Time::getminutos() const {return minutos;}
 unsigned Time::getsegundos() const {return segundos;}





