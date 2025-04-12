#include <iostream>

#include "bankingAccount.hpp"

int main() {
  BankingAccount bankingAccount(9999);

  std::cout << "The balance of your account is: " << bankingAccount.getAccountBalance() << "\n";

  bankingAccount.credit(1);

  std::cout << "The balance after credit 1 is: " << bankingAccount.getAccountBalance() << "\n";

  bankingAccount.credit(-1000);

  bankingAccount.debit(999);

  std::cout << "The balance debit is: " << bankingAccount.getAccountBalance() << "\n";

  return 0;
}