#include "MoneyMarketAccount.h"
#include "CDAccount.h"
#include <iostream>

using namespace std;

int main(){

  BankAccount* mma = new MoneyMarketAccount();
  BankAccount* cda = new CDAccount();
  mma->deposit(500);
  cout << mma->getBalance() << endl;
  if(mma->withdraw(300))
    cout << mma->getBalance() << endl;
  cout << cda->getBalance() << endl;
  
  return 0;
}
