#include "MoneyMarketAccount.h"

MoneyMarketAccount::MoneyMarketAccount(){
  numWithdraws = 0;
  fee = 1.50;
}

MoneyMarketAccount::~MoneyMarketAccount(){
}

bool MoneyMarketAccount::withdraw(double amount){
  bool status = false;
  if(balance >= amount){
    if(numWithdraws <= 2){
      status = true;
      balance -= amount;
      numWithdraws++;
    } else {
      if(balance >= amount + fee){
	status = true;
	balance -= amount + fee;
	numWithdraws++;
      }
    }
  }
}
