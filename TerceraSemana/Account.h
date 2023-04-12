#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include <string>


class Account {

    public:
        

        Account(){
            dinero=0;
            name="";
        }
        //Constructor
        explicit Account( std::string Nombre, int ed){
            name=Nombre;
            dinero=ed;
        }
        
        void setName(std::string NOmbre) {
            name = NOmbre;
        }

        std::string getName() const {
            return name;
        }

        void ingresar(int num){
            dinero=dinero+num;
        }

        void retirar(int num){
            if (num>dinero){
                dinero=dinero;
            }
            else 
            dinero-=num;
        }

        int mirar(){
            return dinero;
        }


    private:
        std::string name;
        int dinero=0;


};

#endif