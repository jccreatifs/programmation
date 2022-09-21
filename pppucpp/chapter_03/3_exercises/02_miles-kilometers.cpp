/* Programming Principles and Practicecs Using C++
 * Chapter 3.02 Exercise
 * 
 * A program in C++ that converts from miles to kilometers.
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
    std::cout << "This program converts miles to kilometers.\n"
              << "Please enter a distance in miles: ";
    double miles {0};
    std::cin >> miles;

    double kilometers  = miles * 1.609;
    std::cout << "\n\n" << miles << " is " << kilometers << " kilometers.\n";
    
    

    return 0;

}