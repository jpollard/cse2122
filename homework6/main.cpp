#include "MoneyMarketAccount.h"
#include "CDAccount.h"
#include <iostream>

using namespace std;

int main(){

  string mmaName = "Josh";
  string cdaName = "Tracy";
  double amount;
  
  BankAccount* mma = new MoneyMarketAccount(mmaName);
  BankAccount* cda = new CDAccount(cdaName);

  cout << "Enter " << mma->getName() << "'s MoneyMarketAccount balance: ";
  cin >> amount;
  while(!mma->deposit(amount)){
    cout << "Invalid amount, try a new amount: ";
    cin >> amount;
  }
  cout << "That worked." << endl;

  cout << "Enter the amount to withdraw from " << mma->getName() << ":";
  cin >> amount;
  while(!mma->withdraw(amount)){
    cout << "Invalid amount, try again: ";
    cin >> amount;
  }
  cout << "Thank worked.";
  
  mma->deposit(500);
  cout << mma->getBalance() << endl;
  if(mma->withdraw(300))
    cout << mma->getBalance() << endl;
  cout << cda->getBalance() << endl;
  
  return 0;
}
