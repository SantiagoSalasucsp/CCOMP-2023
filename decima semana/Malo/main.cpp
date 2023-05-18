#include <iostream>
#include "Time.h"

using namespace std;

int main(){

    Time t;


    cout << "\nInvalid hour after modification: " << t.getHour();

    unsigned int& horasRef{t.badSetHour(20)};

    horasRef = 30;


    t.badSetHour(12) = 74;
    cout<<t.getHour();


}