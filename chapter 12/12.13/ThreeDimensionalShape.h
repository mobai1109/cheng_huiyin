#ifndef THREEDIMENSIONALSHAPE_H_INCLUDED
#define THREEDIMENSIONALSHAPE_H_INCLUDED
#include "Shape.h"

class ThreeDimensionalShape : public Shape
{
public:
   ThreeDimensionalShape( double x, double y ) : Shape( x, y ) { }

   virtual double getArea() const = 0;
   virtual double getVolume() const = 0;
};



#endif // THREEDIMENSIONALSHAPE_H_INCLUDED
