#include <iomanip>
#include "Matrix.h"
using namespace std;

ostream &operator<<( ostream &output, const Martix &martix )
{
    output << martix.number1 <<martix.number2<<martix.number3<<"\n"<<setw(17)<<martix.number4<<martix.number5<<martix.number6<<endl;
    return output;
}

    istream &operator>>( istream &input, Martix &martix )
    {
       input>>setw(1)>>martix.number1;
       input.ignore(1);
       input>>setw(1)>>martix.number2;
       input.ignore(1);
       input>>setw(1)>>martix.number3;
       input.ignore(1);
       input>>setw(1)>>martix.number4;
       input.ignore(1);
       input>>setw(1)>>martix.number5;
       input.ignore(1);
       input>>setw(1)>>martix.number6;
    return input;
    }


