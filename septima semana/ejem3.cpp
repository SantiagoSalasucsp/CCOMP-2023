#include <iostream>

using namespace std;

int main(){

    int arr[]={1,2,3,4};
    int* ptr;
    ptr=arr;

    for( int i=0; i <4;i++){
        cout<<"arr["<<i<<"]  ="<<arr[i]<<endl;
    }


    for (size_t x{0}; x < 4; x++) {
        cout << "*(arr + " << x << ") = " <<*(arr + x) << '\n';
    }



    for (size_t j{0}; j < 4; ++j) {
        cout << "ptr[" << j << "] = " <<ptr[j] << '\n';
    }








}

