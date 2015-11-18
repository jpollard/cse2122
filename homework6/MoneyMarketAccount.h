#ifndef HOMEWORK6_MONEYMARKETACCOUNT_H_
#define HOMEWORK6_MONEYMARKETACCOUNT_H_

#include "BankAccount.h"

class MoneyMarketAccount : public BankAccount {
 public:
  MoneyMarketAccount();
  MoneyMarketAccount(std::string _name);
  MoneyMarketAccount(std::string _name, double _balance);
  
  ~MoneyMarketAccount();
  
  bool withdraw(double amount);
  
 private:
  int numWithdraws;
  int fee;
  
 protected:

};

#endif
