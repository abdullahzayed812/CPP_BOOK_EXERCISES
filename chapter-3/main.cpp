/**
 * 4.16 (Salary Calculator) Develop a C++ program that uses a while statement to determine the
    gross pay for each of several employees. The company pays “straight time” for the first 40 hours
    worked by each employee and pays “time-and-a-half” for all hours worked in excess of 40 hours.
    You are given a list of the employees of the company, the number of hours each employee worked
    last week and the hourly rate of each employee. Your program should input this information for
    each employee and should determine and display the employee’s gross pay


    Enter hours worked (-1 to end): 39
    Enter hourly rate of the employee ($00.00): 10.00
    Salary is $390.00
    Enter hours worked (-1 to end): 40
    Enter hourly rate of the employee ($00.00): 10.00
    Salary is $400.00
    Enter hours worked (-1 to end): 41
    Enter hourly rate of the employee ($00.00): 10.00
    Salary is $415.00
    Enter hours worked (-1 to end): -1
 */

#include <iostream>

class Employee {
 private:
  double hoursWorked;
  double empRate;

 public:
  Employee(double hours, double rate) : hoursWorked(hours), empRate(rate) {}

  double calculateSalary() {
    if (hoursWorked <= 40) {
      return this->hoursWorked * this->empRate;
    }

    double overtimeHours = this->hoursWorked - 40;
    return (this->empRate * 40) + (overtimeHours * this->empRate * 1.5);
  }
};

class EmployeeSalary {
 public:
  void run() {
    double hours, rate;

    std::cout << "Enter hours worked (-1 to exit): ";
    std::cin >> hours;

    while (hours != -1) {
      std::cout << "Enter rate: ";
      std::cin >> rate;

      Employee employee(hours, rate);

      std::cout << "Salary is $: " << employee.calculateSalary() << "\n";

      std::cout << "Enter hours worked (-1 to exist): ";
      std::cin >> hours;
    }
  }
};
/**
 *
    4.17 (Find the Largest) The process of finding the largest number (i.e., the maximum of a group
    of numbers) is used frequently in computer applications. For example, a program that determines
    the winner ofasales contest inputs the number of units sold by each salesperson. The salesperson
    who sells the most units wins the contest. Write a C++ program that uses a while statement to determine and print
    the largest number of 10 numbers input by the user. Your program should use three variables, as follows: counter: A
    counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers
    have been processed). number: The current number input to the program. largest: The largest number found so far.
 */

class LargestNumber {
 public:
  void run() {
    int counter = 1;
    int number;
    int largest;

    std::cout << "Enter number: ";
    std::cin >> number;

    largest = number;

    while (counter < 10) {
      counter++;

      std::cout << "Enter number: ";
      std::cin >> number;

      if (number > largest) {
        largest = number;
      }
    }

    std::cout << "Largest number is: " << largest << "\n";
  }
};

/**
 * (Tabular Output) Write a C++ program that uses a while statement and the tab escape sequence \t to print the
 following table of values:
 *
 *  N    10*N    100*N     1000*N
    1    10      100       1000
    2 20 200 2000
    3 30 300 3000
    4 40 400 4000
    5 50 500 5000
 */

class TabularOutput {
 public:
  void run() {
    int n = 1;

    std::cout << "N\t10*N\t100*N\t1000*N\n";

    while (n < 6) {
      std::cout << n << "\t" << n * 10 << "\t" << n * 100 << "\t" << n * 1000 << "\n";
      n++;
    }
  }
};

class TowLargestNumbers {
 public:
  void run() {
    int counter = 0;
    int number;
    int first;
    int second;

    std::cout << "Enter number: ";
    std::cin >> number;

    first = number;

    while (counter < 10) {
      std::cout << "Enter number: ";
      std::cin >> number;

      if (number > first) {
        second = first;
        first = number;
      }

      counter++;
    }

    std::cout << "Largest one: " << first << "\n";
    std::cout << "Largest two: " << second << "\n";
  }
};

int main() {
  // EmployeeSalary empSalary;
  // empSalary.run();

  // LargestNumber largestNumber;
  // largestNumber.run();

  // TabularOutput tabularOutput;
  // tabularOutput.run();

  // TowLargestNumbers towLargestNumbers;
  // towLargestNumbers.run();

  int row = 10;
  int column;

  while (row >= 1) {
    column = 1;

    while (column <= 50) {
      std::cout << (row % 2 ? ">" : "<");
      column++;
    }

    row--;
    std::cout << "\n";
  }

  return 0;
}