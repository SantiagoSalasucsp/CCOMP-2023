#include <string>

#ifndef CREATEANDDESTROY_H
#define CREATEANDDESTROY_H


class CreateAndDestroy {

    public:
        CreateAndDestroy(int, std::string);

        ~CreateAndDestroy();


    private:
        int objeto;
        std::string mensaje;



};




#endif