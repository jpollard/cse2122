#ifndef BANK_ACCOUNT_H_
#define BANK_ACCOUNT_H_

#include <string>

class BankAccount {
 private:
  std::string name;
  double balance;

 public:
  bool deposit(double amount);
  bool withdraw(double amount);
  double getBalance();
  std::string getName();
  
 protected:
};

#endif
