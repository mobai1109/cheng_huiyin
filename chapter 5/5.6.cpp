#include <iostream>
using namespace std;

int main()
{
   int a=0;
   int b = 0;
   int c = 0;



   for(int i=1;a!=9999;i++)
   {
       cout << "Enter integers (9999 to end):";
   cin >> a;
if(a==9999)
    break;
   b+=a;
   c=b/i;

   }

  cout<<"The average is:"<<c<<endl;
}
