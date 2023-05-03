#include <iostream>
#include <vector>

using namespace std;



size_t getSize( int*);


int main(){

    int array[20];

    cout << "El numero de bytes en el array es: " << sizeof(array) <<endl;


    cout << "El numero de bytes devuelto por getSize es: "<< getSize(array) << endl;







}



size_t getSize(int* ptr) {
    return sizeof(ptr);
}