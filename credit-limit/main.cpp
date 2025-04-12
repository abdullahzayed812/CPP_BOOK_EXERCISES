// (Credit Limits) Develop a C++ program that will determine whether a department-store
// customer has exceeded the credit limit on a charge account. For each customer, the following facts
// are available:
// a) Account number (an integer)
// b) Balance at the beginning of the month
// c) Total of all items charged by this customer this month
// d) Total of all credits applied to this customer's account this month
// e) Allowed credit limit
// The program should use a while statement to input each of these facts, calculate the new balance (= beginning balance
// + charges–credits) and determine whether the new balance exceeds the customer’s credit limit. For those customers
// whose credit limit is exceeded, the program should display the customer’s account number, credit limit, new balance
// and the message “Credit Limit Exceeded.”

// Enter account number (or -1 to quit): 100
// Enter beginning balance: 5394.78
// Enter total charges: 1000.00
// Enter total credits: 500.00
// Enter credit limit: 5500.00
// New balance is 5894.78
// Account: 100
// Credit limit: 5500.00
// Balance: 5894.78
// Credit Limit Exceeded.
// Enter Account Number (or -1 to quit): 200
// Enter beginning balance: 1000.00
// Enter total charges: 123.45
// Enter total credits: 321.00
// Enter credit limit: 1500.00
// New balance is 802.45
// Enter Account Number (or -1 to quit): -1

#include <iomanip>
#include <iostream>

class CustomerAccount {
 private:
  int accountNumber;
  double beginningBalance;
  double totalCharges;
  double totalCredits;
  double creditLimit;
  double newBalance;

 public:
  CustomerAccount()
      : accountNumber(0),
        beginningBalance(0.0),
        totalCharges(0.0),
        totalCredits(0.0),
        creditLimit(0.0),
        newBalance(0.0) {}

  int getAccountNumber() { return this->accountNumber; }

  void setAccountNumber(int accountNumber) { this->accountNumber = accountNumber; }

  void input() {
    std::cout << "Enter begining balance: ";
    std::cin >> this->beginningBalance;

    std::cout << "Enter total charges: ";
    std::cin >> this->totalCharges;

    std::cout << "Enter total credits: ";
    std::cin >> this->totalCredits;

    std::cout << "Enter credit limit: ";
    std::cin >> this->creditLimit;
  }

  void calculateNewBalance() {
    this->newBalance = this->beginningBalance + this->totalCharges - totalCredits;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "New Balance: " << this->newBalance << "\n";
  }

  void checkCreditLimit() {
    bool isExceeded = this->newBalance > this->creditLimit;

    std::cout << "Account: " << this->accountNumber << "\n";
    std::cout << "Credit Limit: " << this->creditLimit << "\n";
    std::cout << "Balance: " << this->newBalance << "\n";
    isExceeded ? std::cout << "Credit Limit Exceeded\n" : std::cout << "\n";
  }
};

int main() {
  int accountNumber;

  std::cout << "Enter account number (or -1 to exit): ";
  std::cin >> accountNumber;

  while (accountNumber != -1) {
    CustomerAccount customer;
    customer.setAccountNumber(accountNumber);

    customer.input();
    customer.calculateNewBalance();
    customer.checkCreditLimit();

    std::cout << "Enter account number (or -1 to exit): ";
    std::cin >> accountNumber;
  }

  return 0;
}