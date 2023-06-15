#ifdef DATE_H
#define DATW_H
#include <iostream>
#include <vector>
#include <array>


class Date {


    public:

        Date( int = 1, int = 1, int = 1900);
        void setDate(int,int,int);
        Date& operator++();
        Date operator++(int);
        Date& operator+=(unsigned int);
        static bool leapyear(int);
        bool endofMonth(int)const;




    private:
        unsigned int month;
        unsigned int day;
        unsigned int year;

        static const std::array<unsigned int, 13> days;
        void helpIncrement();







};



#endif