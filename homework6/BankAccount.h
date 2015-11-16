#ifndef HOMEWORK6_BANKACCOUNT_H_
#define HOMEWORK6_BANKACCOUNT_H_

#include <string>

class BankAccount {
 private:
  std::string name;

 public: 
  // Constructors 
  BankAccount();
  BankAccount(std::string s, double balance);
  
  bool deposit(double amount);
  virtual bool withdraw(double amount) = 0;
  double getBalance();
  std::string getName();

 protected:
  double balance;
};

#endif
