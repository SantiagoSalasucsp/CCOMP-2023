#include <iostream>
#include <string>
using namespace std;


int ContarChardeCadenas(string car, char x){
    int vez=0;
    for(int y=0;y<car.length();y++){
        if(car.at(y)==x){
            vez++;
        }
        else 
            continue;
    }
    return vez;
}

int main(){

    cout<<"Ingrese una palabra: ";
    
    string g="ciancia";
    getline(cin, g);


    cout<<"Ingrese una letra: ";
    char y;
    cin>>y;
    

    cout<< ContarChardeCadenas(g,y)<<endl;






}