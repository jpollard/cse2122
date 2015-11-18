#ifndef HOMEWORK6_CDACCOUNT_H_
#define HOMEWORK6_CDACCOUNT_H_

#include "BankAccount.h"

class CDAccount: public BankAccount{
 private:
  double interestRate;
  
 public:
  CDAccount();
  CDAccount(std::string _name);
  CDAccount(std::string _name, double _balance);
  CDAccount(double interestRate);
  
  bool deposit(double amount);
  bool withdraw(double amount);
  
 protected:
  
};

#endif
