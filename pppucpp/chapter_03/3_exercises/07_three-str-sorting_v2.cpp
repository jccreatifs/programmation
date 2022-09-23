/* Programming Principles and Practicecs Using C++
 * Chapter 3.06v2 Exercise
 * 
 * A program that prompts the user to enter three ints values, and
 * then outputs the values in numerical sequence separated by commas
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
    std::cout << "Please enter three numbers, separated by spaces: ";
    int a {0}, b {0}, c {0};
    std::cin >> a >> b >> c;
    std::cout << "\n" << std::endl;

    if ((a < b and b < c) or (a == b and b < c)){
        std::cout << a << ", " << b << ", " << c << std::endl;
    }
    if ((a < c and c < b) or (a < c and c == b)){
        std::cout << a << ", " << c << ", " << b << std::endl;
    }
    if ((b < a and a < c) or (b == a and a < c)){
        std::cout << b << ", " << a << ", " << c << std::endl;
    }
    if ((b < c and c < a) or (b < c and c == a)){
        std::cout << b << ", " << c << ", " << a << std::endl;
    }
    if ((c < a and a < b) or (c == a and a < b)){
        std::cout << c << ", " << a << ", " << b << std::endl;
    }
    if ((c < b and b < a) or (c < b and b == a)){
        std::cout << c << ", " << b << ", " << a << std::endl;
    }


    return 0;
}
