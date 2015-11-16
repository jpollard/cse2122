#include "CDAccount.h"

CDAccount::CDAccount(){
  balance = 100;
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
  
  if(amount >= balance){

  }

  return status;
}
