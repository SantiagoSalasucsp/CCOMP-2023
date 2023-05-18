#include<string>

#ifndef TIME_H
#define TIME_H

class Time {

    public:

        explicit Time(int=0, int=0, int=0);
        ~Time();

        void setTime(int, int, int);
        std::string toUniversalString() const;
        std::string toStandardString() const;

        void sethoras(int); 
        void setminutos(int); 
        void setsegundos(int); 

        unsigned int gethoras() const; 
        unsigned int getminutos() const; 
        unsigned int getsegundos() const;




    private:

        unsigned int horas{0};
        unsigned int minutos{0};
        unsigned int segundos{0};


};




#endif




