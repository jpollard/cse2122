#include "BankAccount.h"
#include <string>

std::string BankAccount::getName(){
  return name;
}

double BankAccount::getBalance(){
  return balance;
}

bool BankAccount::deposit(double amount){
  bool status = false;
  if(amount >= 0){
    balance += amount;
    status = true;
  }

  return(status);
}

bool BankAccount::withdraw(double amount){
  bool status = false;
  if(amount >= 0 && amount <= balance){
    balance -= amount;
    status = true;
  }

  return(status);
}
