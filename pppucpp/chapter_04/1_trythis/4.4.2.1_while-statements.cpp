/* Programming Principles and Practicecs Using C++
 * Chapter 4 Try This section
 * 
 * A program that create a list of lowercase letters and print their int values.
 */

#include "std_lib_facilities.h"

int main()
{
// This block links this program to the input and output files
// I'm using for testing.
#ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
#endif

// Solution starts here
  char letter {'a'};
//  int i {0};
    while (letter <= 'z'){
      std::cout << letter << "\t" 
                << letter + 0 << "\n";
      letter++;
    }

  return 0;
}
