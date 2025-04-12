#include <string>

#include "date.hpp"

class HealthProfile {
 private:
  std::string firstName;
  std::string lastName;
  std::string gender;
  Date date;
  int height;
  int weight;

  //     BMI
  // weightInPounds × 703
  // heightInInches × heightInInches
};