#include <iostream>
using namespace std;

int main()
{
   int a=0;
   int b=0;
   int c=0;
   cout << "Enter the number of integers to be processed ";
   cin >> a;
   cin>>c;


   for ( int i = 2; i <= a; i++ )
   {
      cin >> b;


      if ( b < c )
         c = b;
   }


   cout << "\nThe smallest integer is: " << c << endl;
}
