#include <iostream>

int main(){

/*  std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;
*/

    std::cerr << "The semi-colon terminated the "
              << "first line.";
    std::cout << std::endl;
    std::cerr << "That leaves the rest of << operators"
              << " without an ostream object cout.";
    std::cout << std::endl;
    std::cerr << "To fix this, we either remove the "
              << "semicolons or attach the orphaned " 
              << "lines with ostream objects of their";
    std::cout << " own." << std::endl;

    int v1 = 1,
        v2 = 2;

    std::cout << "The sum of " << v1
              << " and " << v2
              << " is " << v1 + v2 << std::endl;

  return 0;
}
