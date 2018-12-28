#include <iostream>
using namespace std;

int main()
{
   int a=0;
   int b=0;
   int c=0;

   cout << "Enter two integers in the range 1-20: ";
   cin >> x >> y;
   for ( int i = 1; i <= y; i++ )
   {
      for ( int j = 1; j <= x; j++ )
         cout << '@';

      cout << endl;
   }
}
