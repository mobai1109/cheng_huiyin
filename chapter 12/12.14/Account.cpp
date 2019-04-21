
#include <iostream>
#include "Account.h" 
using namespace std;
Account::Account( double initialBalance )
{
   if ( initialBalance >= 0.0 )
      balance = initialBalance;
   else 
   {
      cout << "Error: Initial balance cannot be negative." << endl;
      balance = 0.0;
   } 
} 
void Account::credit( double amount )
{
   balance = balance + amount; // add amount to balance
} 

bool Account::debit( double amount )
{
   if ( amount > balance ) // debit amount exceeds balance
   {
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   }
   else // debit amount does not exceed balance
   {
      balance = balance - amount;
      return true;
   } 
} 

void Account::setBalance( double newBalance )
{
   balance = newBalance;
} // end function setBalance

// return the account balance
double Account::getBalance()
{
   return balance;
} 

