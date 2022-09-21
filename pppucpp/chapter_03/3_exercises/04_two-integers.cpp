/* Programming Principles and Practicecs Using C++
 * Chapter 3.04 Exercise
 * 
 * A program that determine the smaller, larger, sum, difference, product, and ratio
 * of two integer values and report them to the user.
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
    std::cout << "This program accepts two integers as input and determine the \n"
              << "smaller, larger, sum, and difference, product, and their ratio.\n" << std::endl;
    std::cout << "Please enter two integers, separated by a space: ";

    int val1 {0},
        val2 {0};

    std::cin >> val1 >> val2;
    std::cout << "\n\n";

    // smaller
    if (val1 < val2){
        std::cout << val1 << " is smaller than " << val2 << "\n"
                  << val2 << " is larger than " << val1 << "\n" << std::endl;
    }
    else {
        std::cout << val2 << " is smaller than " << val1 << "\n"
                  << val1 << " is larger than " << val2 << "\n" << std::endl;
    }

    // sum
    std::cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << ".\n" << std::endl;

    // difference
    if (val1 < val2){
        int smaller = val1;
        int larger = val2; 
        std::cout << "Their difference is " << larger - smaller << ".\n" << std::endl;
    }
    else {
        int smaller = val2;
        int larger = val1;
        std::cout << "Their difference is " << larger - smaller << ".\n" << std::endl;
    }

    // product
    std::cout << "Their product is " << val1 * val2 << ".\n" << std::endl;

    // ratio
    if (val1 < val2){
        double ratio = val2 / val1;
        std::cout << "Their ratio is " << ratio << ".\n" << std::endl;
    }
    else {
        double ratio = val1 / val2;
        std::cout << "Their ratio is " << ratio << ".\n" << std::endl;
    }
    return 0;

}