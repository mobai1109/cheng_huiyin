#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <iostream>
#include <string>

class Martix
{
    friend std::ostream &operator<<( std::ostream &, const Martix & );
    friend std::istream &operator>>( std::istream &,Martix & );
private:
    int number1=1;
    int number2=2;
    int number3=3;
    int number4=4;
    int number5=5;
    int number6=6;
};



#endif // MATRIX_H_INCLUDED
