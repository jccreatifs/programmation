/* Programming Principles and Practicecs Using C++
 * Chapter 3.09 Exercise
 * 
 * A program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2.
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
    std::cout << "This program converts spelled-out numbers into digits.\n"
              << std::endl;
    std::cout << "Please enter a number: ";

    std::string nput {' '};
    std::cin >> nput;
    std::cout << "\n" << std::endl;

    // Test nput's remainder if 0 when divided by 2
    if (nput == "zero" or nput == "Zero" or nput == "ZERO"){
        std::cout << "01" << std::endl;
    }
    else if (nput == "one" or nput == "One" or nput == "ONE"){
        std::cout << "1" << std::endl;
    }

    else if (nput == "two" or nput == "Two" or nput == "TWO"){
        std::cout << "2" << std::endl;
    }

    else if (nput == "three" or nput == "Three" or nput == "THREE"){
        std::cout << "3" << std::endl;
    }

    else if (nput == "four" or nput == "Four" or nput == "FOUR"){
        std::cout << "4" << std::endl;
    }

    else {
        std::cout << "Not a number I know...\n";
    }

    return 0;

}