/* Programming Principles and Practicecs Using C++
 * Chapter 4 Try This section
 * 
 * A program that converts pesos ('P'), yen ('Y'), and won ('W') into dollars.
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
    const double php_per_dollar {58.94},
                 yen_per_dollar {143.34},
                 won_per_dollar {3.67};
    double amount {0};

    char currency {' '};
    std::cout << "This program accepts an amount and converts it into dollars.\n\n"
              << "The input should be in this format: <currency symbol><amount>\n"
              << "For example: P200, Y20.50, W50.\n"
              << "'P' is for Philippine pesos, 'Y' for yen, and 'W' for won.\n" << std::endl;
    std::cout << "Please enter an amount: ";
    // std::cin >> amount >> currency;
    std::cin >> currency >> amount;
    std::cout << "\n" << std::endl;

    switch (currency){
        case 'P': std::cout << amount << " pesos is " << amount / php_per_dollar << " dollars.\n";
        break;
        case 'Y': std::cout << amount << " yen is " << amount / yen_per_dollar << " dollars.\n";
        break;
        case 'W': std::cout << amount << " won is " << amount / won_per_dollar << " dollars.\n";
        break;
        default: std::cout << "Sorry, I don't what currency is " << currency << ".\n";
        break;
    }

    return 0;
}
