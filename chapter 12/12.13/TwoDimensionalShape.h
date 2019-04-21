#ifndef TWODIMENSIONALSHAPE_H_INCLUDED
#define TWODIMENSIONALSHAPE_H_INCLUDED
#include "Shape.h"

class TwoDimensionalShape : public Shape
{
public:
   TwoDimensionalShape( double x, double y ) : Shape( x, y ) { }

   virtual double getArea() const = 0;
};


#endif // TWODIMENSIONALSHAPE_H_INCLUDED
