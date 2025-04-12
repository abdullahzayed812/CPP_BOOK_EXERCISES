#include "date.hpp"

#include <iostream>

Date::Date(const int& day, const int& month, const int& year) {
  this->setDay(day);
  this->setMonth(month);
  this->setYear(year);
}

const int& Date::getDay() const { return this->day; }
const int& Date::getMonth() const { return this->month; }
const int& Date::getYear() const { return this->year; }

void Date::setDay(const int& day) {
  if (day < 32) {
    this->day = day;
  }

  std::cout << "Day must be less than 32, it stored 1.\n";

  this->day = 1;
}

void Date::setMonth(const int& month) {
  if (month < 13) {
    this->month = month;
  }

  std::cout << "Month must be less than 13, it stored 1.\n";

  this->month = 1;
}

void Date::setYear(const int& year) { this->year = year; }

void Date::displayDate() const { std::cout << this->day << "/" << this->month << "/" << this->year << "\n"; }