#include <iostream>

using namespace std;

int main()
{
    double a ;
    double b ;
    double c ;

    cout <<"Enter a:";
    cin>>a;
    cout <<"Enter b:";
    cin>>b;
    cout <<"Enter c:";
    cin>>c;
    if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
    {
        cout<<"This is a zhijiao:"<<endl;
    }
    else
        cout<<"This is not a zhijiao:"<<endl;
}
