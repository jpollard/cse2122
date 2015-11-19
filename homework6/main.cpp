#include "MoneyMarketAccount.h"
#include "CDAccount.h"

#include <iostream>

using namespace std;

<<<<<<< HEAD
bool transfer(BankAccount* from, BankAccount* to, double amount);
=======
bool transfer(BankAccount*, BankAccount*, double);
>>>>>>> d9cb92cea0620ac7d6dfdc7d7a0ef3c4e9c4502c

int main(){

  string mmaName = "Josh";
  string cdaName = "Tracy";
  double amount;
  
  MoneyMarketAccount* mma = new MoneyMarketAccount(mmaName);
  CDAccount* cda = new CDAccount(cdaName);

  cout << "Enter " << mma->getName() << "'s MoneyMarketAccount balance: ";
  cin >> amount;
  while(!mma->deposit(amount)){
    cout << "Invalid amount, try a new amount: ";
    cin >> amount;
  }
  cout << "That worked." << endl;

  for(int i = 0; i < 2; i++){
    cout << "Enter the amount to withdraw from " << mma->getName() << ": ";
    cin >> amount;
    while(!mma->withdraw(amount)){
      cout << "Invalid amount, try again: ";
      cin >> amount;
    }
    cout << "That worked." << endl;
    cout << mma->getBalance() << endl;
<<<<<<< HEAD
  }

  cout << "Enter " << cda->getName() << "'s CDAccount balance: ";
  cin >> amount;
  while(!cda->deposit(amount)){
    cout << "Invalid amount, try a new amount: ";
    cin >> amount;
  }

  cout << "Enter " << cda->getName() << "'s CDAccount interest rate: ";
  cin >> amount;


  while(!cda->setInterestRate(amount)){
    cout << "Invalid interest rate, try a new value: ";
    cin >> amount;
  }

  cout << "Enter amout to deposit into "<< cda->getName() << "'s CDAccount: ";
  cin >> amount;
  while(!cda->deposit(amount)){
    cout << "Invalid amount, try a new amount: ";
    cin >> amount;
  }
  cout << "That worked."<< endl;
  cout << cda->getName() << "'s new balance: " << cda->getBalance() << endl;

  cout << "Enter amount to transfer from " << cda->getName() << " to " << mma->getName() << ": ";
  cin >> amount;
  while(!transfer(cda, mma, amount)){
    cout << "Invalid amount, try a new amount: ";
    cin >> amount;
  }
  cout << "Thank worked." << endl;
  cout << cda->getName() << "'s new balance: " << cda->getBalance() << endl;
  cout << mma->getName() << "'s new balance: " << mma->getBalance() << endl;

   cout << "Enter amount to transfer from " << mma->getName() << " to " << cda->getName() << ": ";
  cin >> amount;
  while(!transfer(mma, cda, amount)){
    cout << "Invalid amount, try a new amount: ";
    cin >> amount;
  }
  cout << "Thank worked." << endl;
  
  cout << cda->getName() << "'s new balance: " << cda->getBalance() << endl;
  cout << mma->getName() << "'s new balance: " << mma->getBalance() << endl;
  
=======
  cout << cda->getBalance() << endl;
 
  transfer(mma, cda, 100);

  cout << mma->getBalance() << " " << cda->getBalance() << endl;
 
>>>>>>> d9cb92cea0620ac7d6dfdc7d7a0ef3c4e9c4502c
  return 0;
}

bool transfer(BankAccount* from, BankAccount* to, double amount){
  bool status = false;
<<<<<<< HEAD
  if(from->withdraw(amount) && to->deposit(amount)){
    status = true;
  }
=======
  status = from->withdraw(amount) && to->deposit(amount);
>>>>>>> d9cb92cea0620ac7d6dfdc7d7a0ef3c4e9c4502c

  return status;
}
