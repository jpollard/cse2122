#include "CDAccount.h"

CDAccount::CDAccount():BankAccount(){
}

CDAccount::CDAccount(std::string _name):BankAccount(_name){
}

CDAccount::CDAccount(std::string _name, double _balance):BankAccount(_name, _balance){
  
}

CDAccount::CDAccount(double _interestRate){
  interestRate = _interestRate;
}

bool CDAccount::deposit(double amount){
  bool status = false;

  return status;
}

bool CDAccount::withdraw(double amount){
  bool status = false;
  double penalty = balance * interestRate;
  
  if(amount + penalty <= balance ){
    balance -= (amount + penalty);
    status = true;
  }

  return status;
}
