#ifndef CUBE_H
#define CUBE_H

#include "ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape
{
public:
   Cube( double = 0.0, double = 0.0, double = 0.0 );

   virtual double getArea() const;
   virtual double getVolume() const;
   double getSideLength() const;
   void print() const;
private:
   double sideLength;
};

#endif
