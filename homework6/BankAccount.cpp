#include "BankAccount.h"
#include <string>

// Default constructor
BankAccount::BankAccount(){
  balance = 0;
  name = "";
}

BankAccount::BankAccount(std::string _name){
  name = _name;
}

// Constructor that provides the initial name and balance of the account
BankAccount::BankAccount(std::string _name, double _balance){
  name = _name;
  balance = _balance;
}


// Get name of account
std::string BankAccount::getName(){
  return name;
}

// Get balance of account
double BankAccount::getBalance(){
  return balance;
}

// Deposit amount in to the account, iff amount > 0
bool BankAccount::deposit(double amount){
  bool status = false;
  if(amount >= 0){
    balance += amount;
    status = true;
  }

  return(status);
}

