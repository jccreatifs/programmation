#include <iostream>

int main()
{
  std::cout << "Please enter your full name and age: ";
  std::string firstName, lastName;
  double age;
  std::cin >> firstName >> lastName >> age;

  std::cout << "Hello, " << firstName 
            << " " << lastName << ".\n"
            << "You're " << age * 12 << " months old.\n";

  return 0;
}
