#include "MoneyMarketAccount.h"
#include <iostream>

using namespace std;

int main(){

  BankAccount* mma = new MoneyMarketAccount();
  mma->deposit(500);
  cout << mma->getBalance() << endl;
  if(mma->withdraw(300))
    cout << mma->getBalance() << endl;
  
  return 0;
}
