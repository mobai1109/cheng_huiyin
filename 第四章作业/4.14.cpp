#include <iostream>

using namespace std;

int main()
{
    int account;
    double beginningbalance;
    double totalcharge;
    double totalcredit;
    double creditlimit;
    double newbalance;

    cout<<"Enter account number (-1 to quit ):";
    cin>>account;
    while (account==-1)
    {
        return 0;
    }

    cout<<"Enter beginning balance:";
    cin>>beginningbalance;
    cout<<"Enter total charge:";
    cin>>totalcharge;
    cout<<"Enter total credit:";
    cin>>totalcredit;
    cout<<"Enter credit limit:";
    cin>> creditlimit;


    while (account!=-1)
    {
        newbalance=beginningbalance+totalcharge-totalcredit;
        if (newbalance>creditlimit)
        {
            cout<<"Account:"<<account<<endl;
            cout<<"Credit limit:"<<creditlimit<<endl;
            cout<<"Balance:"<<newbalance<<endl;
            cout<<"Credit Limit Exceeded."<<endl;
        }
        else
        {
            cout<<"Account:"<<account<<endl;
            cout<<"Credit limit:"<<creditlimit<<endl;
            cout<<"Balance:"<<newbalance<<endl;
        }
        cout<<"Enter account number (-1 to quit ):";
    cin>>account;
    while (account==-1)
    {
        return 0;
    }
    cout<<"Enter beginning balance:";
    cin>>beginningbalance;
    cout<<"Enter total charge:";
    cin>>totalcharge;
    cout<<"Enter total credit:";
    cin>>totalcredit;
    cout<<"Enter credit limit:";
    cin>> creditlimit;
    }
   return 0;

}
