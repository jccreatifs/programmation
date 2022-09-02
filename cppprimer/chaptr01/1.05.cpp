#include <iostream>

int main(){

  std::cout << "Enter two numbers: " << std::endl;
  int x1 = 0, x2 = 0;
  std::cin >> x1 >> x2;

  std::cout << "The 1st number is " << x1 << std::endl;
  std::cout << "The 2nd number is " << x2 << std::endl;

  std::cout << "Their product is " << x1 * x2 << "."
            << std::endl;

  return 0;
}
