#ifndef HOMEWORK6_MONEYMARKETACCOUNT_H_
#define HOMEWORK6_MONEYMARKETACCOUNT_H_

#include "BankAccount.h"

class MoneyMarketAccount : public BankAccount {
 public:
  MoneyMarketAccount();
  ~MoneyMarketAccount();
  
  bool withdraw(double amount);
  
 private:
  int numWithdraws;
  int fee;
  
 protected:

};

#endif
