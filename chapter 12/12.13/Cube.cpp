#include <iostream>
#include "Cube.h"
using namespace std;
Cube::Cube( double s, double x, double y )
   : ThreeDimensionalShape( x, y )
{
   sideLength = ( ( s > 0.0 ) ? s : 0.0 );
}
double Cube::getArea() const
{
   return 6 * sideLength * sideLength;
}
double Cube::getVolume() const
{
   return sideLength * sideLength * sideLength;
}
double Cube::getSideLength() const
{
   return sideLength;
}
void Cube::print() const
{
   cout << "Cube with side length " << sideLength << "; center at ("
      << xCenter << ", " << yCenter << ")";
}
