/* Programming Principles and Practicecs Using C++
 * Chapter 3.10 Exercise
 * 
 * A program that takes an operation followed by two operands and outputs the result.
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
    // Prompts the user for input
    std::cout << "This program calculates two operands based on chosen operation.\n"
              << "Input in this manner:\n"
              << "+ 100 3.14\n"
              << "* 4 5\n\n" << std::endl;
    std::cout << "Please enter an input to operate: ";

    string operation {" "};
    double first_number {0},
           second_number {0};

    std::cin >> operation >> first_number >> second_number;
    std::cout << "\n" << std::endl;

    if (operation == "+" or operation == "plus"){
        std::cout << "Answer: " << first_number + second_number << ".\n" << std::endl;
    }
    else if (operation == "-" or operation == "minus"){
        std::cout << "Answer: " << first_number - second_number << ".\n" << std::endl;
    }
    else if (operation == "*" or operation == "mul"){
        std::cout << "Answer: " << first_number * second_number << ".\n" << std::endl;
    }
    else if (operation == "/" or operation == "div"){
        std::cout << "Answer: " << first_number / second_number << ".\n" << std::endl;
    }
    else {
        std::cout << "Invalid input...\n" << std::endl;
    }

    return 0;

}