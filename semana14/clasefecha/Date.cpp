#include <iostream>
#include "Date.h"
#include <array>


Date::Date(int d, int m, int y){
    setData(int d, int  m. int y);
}

void Date::setDate(int d, int m, int y){
    if((m>=1) && (m<=12)){
        month=m;
    }

}

Date::leapeyear(tesyear){
    return ((tesyear%400=0)||(tesyear%100!=0 && tesyear%4==0));
}

