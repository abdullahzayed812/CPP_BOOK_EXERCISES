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

int main() {
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

  return 0;
}