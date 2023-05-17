#include <string>
#include "Time.h"
#include <stdexcept>
#include <iomanip>
#include <sstream>




using namespace std;


Time::Time(int hora, int minutos, int ssegundos){
    setTime(hora, minutos, segundos);
}


void Time::setTime(int hora,int minutos, int segundos){

    if((hora>=0 && hora<=24) && (minutos>=0 && segundos<=60) && (segundos>=0 && segundos<=60)){
        this->hora=hora;
        this->minutos=minutos;
        this->segundos=segundos;
    }
    else {
        throw invalid_argument("La hora o el minuto o el segundo, esta fuera de rango");
    }


}

string Time::toUniversalString() const{

    ostringstream output;
    output << setfill('0')<< setw(2) << hora << ":"<< setw(2) << minutos << ":" <<setfill('0')<< setw(2) << segundos;
    return output.str();

}

string Time::toStandardString() const{

    ostringstream output;
    output <<((hora==0 || hora==12) ? 12 : hora % 12) <<":"<<setfill('0')<<setw(2)<<minutos<<":"<<setfill('0')<<setw(2)<<segundos << (hora < 12 ? " AM" : " PM");
    return output.str();
}