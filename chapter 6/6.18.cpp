#include <iostream>

using namespace std;
int integerPower( int, int );

int main()
{
   int base;
   int exp;
   cout<<"Enter the base and exp number:";
   cin>>base>>exp;
   cout << base << " to the power " << exp << " is: "
      << integerPower( base, exp ) << endl;
}
int integerPower( int a, int b )
{

int product=1;
for (int i=1;i<=b;i++)
    product*=a;
 return product;
}

