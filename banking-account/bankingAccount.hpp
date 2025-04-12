#include <iostream>

class BankingAccount {
 private:
  int accountBalance;

 public:
  BankingAccount(const int&);

  const int& getAccountBalance() const;

  void setAccountBalance(const int&);

  void credit(const int&);

  void debit(const int&);
};