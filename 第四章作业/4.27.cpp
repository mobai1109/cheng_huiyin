#include<iostream>
using namespace std;
int main()
{
int a=0,b=1,c=0,d=0;

cout<<"请输入二进制数:"<<a<<endl;
cin>>a;
{
    return 0;
}
while(a>0)
{
    a=a/10;
    d=a%10;
    b=b*2;
    c=c+b*d;
    return 0;
}
cout<<"十进制数是:"<<c<<endl;
return 0;
}
