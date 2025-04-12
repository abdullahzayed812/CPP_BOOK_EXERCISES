#include "bankingAccount.hpp"

#include <iostream>

BankingAccount::BankingAccount(const int& accountBalance) { this->setAccountBalance(accountBalance); }

const int& BankingAccount::getAccountBalance() const { return this->accountBalance; }

void BankingAccount::setAccountBalance(const int& accountBalance) {
  if (accountBalance < 0) {
    this->accountBalance = 0;

    std::cout << "Invalid account balance, it must be grater than (0).\n";

    return;
  }

  this->accountBalance = accountBalance;
}

void BankingAccount::credit(const int& amount) {
  if (amount < 0) {
    std::cout << "Invalid amount, it must be grater than (0).\n";

    return;
  }

  this->accountBalance += amount;
}

void BankingAccount::debit(const int& amount) {
  if (amount > this->accountBalance) {
    std::cout << "Debit amount exceeded account balance.\n";

    return;
  }

  this->accountBalance -= amount;
}