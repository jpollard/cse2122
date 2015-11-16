#include "MoneyMarketAccount.h"
#include "CDAccount.h"
#include <iostream>

using namespace std;

bool transfer(BankAccount*, BankAccount*, double);

int main(){

  BankAccount* mma = new MoneyMarketAccount();
  BankAccount* cda = new CDAccount();
  mma->deposit(500);
  cout << mma->getBalance() << endl;
  if(mma->withdraw(300))
    cout << mma->getBalance() << endl;
  cout << cda->getBalance() << endl;
 
  transfer(mma, cda, 100);

  cout << mma->getBalance() << " " << cda->getBalance() << endl;
 
  return 0;
}

bool transfer(BankAccount* from, BankAccount* to, double amount){
  bool status = false;
  status = from->withdraw(amount) && to->deposit(amount);

  return status;
}
