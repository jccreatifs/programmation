/* Programming Principles and Practicecs Using C++
 * Chapter 4 Try This section
 * 
 * A program that implements square() without using multiplication
 */

#include "std_lib_facilities.h"

int sans_square(int n){
  int square {0};
  int i = n;                    // Looping the addition the same number as the input
  while (i != 0){   
    square = square + n;
    i--;                        // until it gets to zero.
  }
  return square;
}

int main()
{
// This block links this program to the input and output files
// I'm using for testing.
#ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
#endif

// Solution starts here
    std::cout << "This program squares a number without using multiplication operation.\n"
              << std::endl;
    std::cout << "Enter a number to be squared: ";
    int nput {0};
    std::cin >> nput;
    std::cout << "\n" << std::endl;

    std::cout << "The square of " << nput << " is " << sans_square(nput) << std::endl;


    return 0;
}
