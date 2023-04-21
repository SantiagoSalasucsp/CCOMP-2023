#include <iostream>
#include <vector>
#include <string>

using namespace std;


void PrintVector( vector<int>& vector) {
    for (int x=0;x<vector.size() ; x++) {
        cout << vector[x] << endl;
    }
    

}


int main(){

    vector<string> notas{"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};

    vector<int> primero{10001,20,30};

    vector<int> integers2(10);

    //cout<<primero.size()<<endl;
    

    //inputVector(primero);

    //primero[5]=1000;

    primero.push_back(10);
    primero.push_back(20);
    primero.push_back(30);

    PrintVector(primero);





    //vector<int> tercero{primero};
    //cout<<tercero.size();



    return 0;
}