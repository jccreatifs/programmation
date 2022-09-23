/* Programming Principles and Practicecs Using C++
 * Chapter 3.08 Exercise
 * 
 * A program that test an integer value to determine if it is odd or even.
 */

//
#include "std_lib_facilities.h"

int main()
{

// This block links this program to the input and output files
// I'm using for testing
#ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
#endif

// Solution starts here
    std::cout << "This program accepts an integer and determines if it's odd or even\n"
              << std::endl;
    std::cout << "Please enter an integer: ";

    int nput {0};
    std::cin >> nput;
    std::cout << "\n" << std::endl;

    // Test nput's remainder if 0 when divided by 2
    if (nput % 2 == 0){
        std::cout << "The value of " << nput << " is an even number.\n" << std::endl;
    }
    else {
        std::cout << "The value of " << nput << " is an odd number.\n" << std::endl;
    }

    return 0;

}