#include <iostream>
using namespace std;

int main()
{
   int number = 0;
   int a;
   int b;
   int c;
   int d;
   cout<<"Enter a number 9999~100000:";
   cin>>number;
         if ( number < 100000 )
      {
         if ( number > 9999 )
         {

         a=number/10000;
         b=number%10000/1000;
         c=number%10000%1000%100/10;
         d=number%10000%1000%100%10;
         }
         else
            cout << "Number must be 10000~99999" << endl;
      }
         else
         cout << "Number must be 5 10000~99999"<<endl;
         if(a=d)
         {
             if(b=c)
                cout << number <<"Yes"<<endl;
             else
                cout << number <<"NO"<<endl;
         }
   else
    cout << number <<"NO"<<endl;

}
