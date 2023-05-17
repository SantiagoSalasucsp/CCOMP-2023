#include<string>

#ifndef TIME_H
#define TIME_H

class Time {

    public:

        explicit Time(int=0, int=0, int=0);

        void setTime(int, int, int);
        std::string toUniversalString() const;
        std::string toStandardString() const;


    private:

        unsigned int hora{0};
        unsigned int minutos{0};
        unsigned int segundos{0};


};




#endif




