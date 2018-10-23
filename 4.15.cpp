#include <iostream>

using namespace std;

int main()
{
    int sales;
    double salary;
    cout<<"Enter sales in dollars (-1 to end):"<<endl;
    cin >> sales;
    while (sales == -1)
    {
      return 0;
    }
    if (sales != -1)
        salary = sales*0.09+200;
        cout<<"Salary is:"<< salary <<endl;
}
