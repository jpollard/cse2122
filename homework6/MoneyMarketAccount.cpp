#include "MoneyMarketAccount.h"
#include <iostream>

MoneyMarketAccount::MoneyMarketAccount(){
  numWithdraws = 0;
  fee = 1.50;
}

MoneyMarketAccount::MoneyMarketAccount(std::string _name): BankAccount(_name){
  numWithdraws = 0;
  fee = 1.50;
}

MoneyMarketAccount::MoneyMarketAccount(std::string _name, double _balance): BankAccount(_name, _balance){
  numWithdraws = 0;
  fee = 1.50;
}

MoneyMarketAccount::~MoneyMarketAccount(){
  
}

bool MoneyMarketAccount::withdraw(double amount){
  bool status = false;
  if(balance >= amount){
    if(numWithdraws < 2){
      status = true;
      balance -= amount;
      numWithdraws++;
    } else {
      if(balance >= (amount + fee)){
	status = true;
	balance -= (amount + fee);
	numWithdraws++;
      }
    }
  }
  return status;
}
