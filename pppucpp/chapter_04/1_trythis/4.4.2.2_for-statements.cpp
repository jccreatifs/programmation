/* Programming Principles and Practicecs Using C++
 * Chapter 4 Try This section
 * 
 * A program that lists chars (letters, numbers, and spécial characters) and their int équivalent.
 */

#include "../../_/std_lib_facilities.h"

int main()
{
/***
// This block links this program to the input and output files
// I'm using for testing.
#ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
#endif
***/
// Solution starts here
  char letter {' '};
  int i {0};
  for (i = 32; i <= 127; i++){
    letter = i;
    std::cout << letter << "\t"
              << letter + 0 << "\n";
  }
  return 0;
}
