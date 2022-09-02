/* Exercises Section 1.4.2
** Exercise 1.12
**/

#include <iostream>

/*
  What does the following for loop do?
  What is the final value of `sum`?
*/

int main(){

    int sum = 0;
    // Loops through all the integers from -100 to 100
    for (int i = -100; i <= 100; ++i) //
        sum += i;
        // Final value is 0
        
    std::cout << sum << std::endl;

    return 0;

// The loop adds the integers from -100 to 100,
// and the final value of `sum` is 0.
}