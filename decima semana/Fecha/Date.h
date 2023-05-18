#include <iostream>





class Date {

    private:

        static const unsigned int monthsPerYear{12};

        explicit Date(unsigned int=1 , unsigned int =1, unsigned int=1900);

        std::string toString() const;

        ~Date();



    public: 

        unsigned int dia;
        unsigned int mes;
        unsigned int year;

        unsigned int chekDay()  const;




};