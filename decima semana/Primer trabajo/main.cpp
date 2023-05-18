#include <iostream>
#include "Time.h"
#include <string>
#include <stdexcept>

using namespace std;


void displayTime(const string& message, const Time& time) {
    cout << message << "\nTiempo: " <<time.toUniversalString()<< "\nTienpo normal: " <<time.toStandardString() << "\n\n";
}


int main(){

    Time p(12,10,61);
    

    cout<<p.toUniversalString();




}