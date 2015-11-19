#include "CDAccount.h"

CDAccount::CDAccount():BankAccount(){
  interestRate = 0;
}

CDAccount::CDAccount(std::string _name):BankAccount(_name){
  interestRate = 0;
}

CDAccount::CDAccount(std::string _name, double _balance):BankAccount(_name, _balance){
  interestRate = 0;
}

CDAccount::CDAccount(double _interestRate){
  interestRate = _interestRate;
}

bool CDAccount::setInterestRate(double amount){
  bool status = false;

  if(amount >= 0){
    interestRate = amount;
    status = true;
  }

  return status;
}

bool CDAccount::deposit(double amount){
  bool status = false;
  if(amount >= 0){
    balance += amount;
    status = true;
  }
  
  return status;
}

bool CDAccount::withdraw(double amount){
  bool status = false;
  double penalty = (balance * interestRate) * .25;

  if(amount >= 0){
    if(amount + penalty <= balance ){
      balance -= (amount + penalty);
      status = true;
    }
  }

  return status;
}
