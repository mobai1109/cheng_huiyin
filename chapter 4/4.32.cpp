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
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
                cout<<"This is a sanjiao:"<<endl;
        }
        else
            cout<<"This is not a sanjiao:"<<endl;
    }
    else
        cout<<"This is not a sanjiao:"<<endl;
}
