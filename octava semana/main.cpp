#include <iostream>
#include <vector>
using namespace std;


class nose{
    private:
        int num=0;

    public:

    nose(int x){
        num=x;
    }

    void setNum(int x){
        num=x;
    }
    int getNum(){
        return num;
    }
};

int main(){



    nose e1(30);

    int x=0;
    int y=1;

    nose*ptr1=&e1;
    int*ptr2=&y;

    vector<nose*> vec;

    vec.push_back(ptr1);

    *ptr1.setNum(5); // incorrecto
     ptr1->setNum(5); // correcto 
     cout<<e1.getNum<<endl;
    cout<<ptr1->getNum<<endl;

    // -> se usa cuando son punteros ( punteros)
    // (.) se usa cunado es la instancia (objetos o instancias)










}