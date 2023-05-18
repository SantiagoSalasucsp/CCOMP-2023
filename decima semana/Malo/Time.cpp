#include <string>
#include "Time.h"
#include <stdexcept>
#include <iomanip>
#include <sstream>




using namespace std;





void Time::setTime(int horas,int minutos, int segundos){

    if((horas>=0 && horas<=24) && (minutos>=0 && segundos<=60) && (segundos>=0 && segundos<=60)){
        this->horas=horas;
        this->minutos=minutos;
        this->segundos=segundos;
    }
    else {
        throw invalid_argument("La hora o el minuto o el segundo, esta fuera de rango");
    }


}


unsigned int Time::getHour() const {return horas;}


unsigned int& Time::badSetHour(int hh) {

    if (hh >= 0 && hh < 24) {
        horas=hh;
    }
    else {
        throw invalid_argument ("Las horas tiene que estar en 0-23");
    }

    return horas;

}



