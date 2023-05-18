#include<string>

#ifndef TIME_H
#define TIME_H

class Time {

    public:

       void setTime(int, int, int);

       unsigned int getHour() const;

        unsigned int& badSetHour(int); 




    private:

        unsigned int horas{0};
        unsigned int minutos{0};
        unsigned int segundos{0};


};




#endif