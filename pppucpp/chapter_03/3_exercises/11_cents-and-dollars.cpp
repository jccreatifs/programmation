/* Programming Principles and Practicecs Using C++
 * Chapter 3.11 Exercise
 * 
 * A program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins),
 * dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent coins), and one-dollar coins
 * (100-cent coins).
 */


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
    std::cout << "This program calculates the total coins you have.\n" << std::endl;

    std::cout << "How many pennies do you have? ";
    double pennies {0};
    std::cin >> pennies;
    pennies *= 1;
    std::cout << "\n" << std::endl;

    std::cout << "How many nickels do you have? ";
    double nickels {0};
    std::cin >> nickels;
    nickels *= 5;
    std::cout << "\n" << std::endl;

    std::cout << "How many dimes do you have? ";
    double dimes {0};
    std::cin >> dimes;
    dimes *= 10;
    std::cout << "\n" << std::endl;

    std::cout << "How many quarters do you have? ";
    double quarters {0};
    std::cin >> quarters;
    quarters *= 25;
    std::cout << "\n" << std::endl;

    std::cout << "How many half dollars do you have? ";
    double half_dollars {0};
    std::cin >> half_dollars;
    half_dollars *= 50;
    std::cout << "\n" << std::endl;

    std::cout << "How many dollars do you have? ";
    double dollars {0};
    std::cin >> dollars;
    dollars *= 100;
    std::cout << "\n" << std::endl;

    // Output the totals
    if (pennies == 1){
        std::cout << "You have " << pennies << " penny.\n";
    }
    else {
        std::cout << "You have " << pennies << " pennies.\n";
    }

    if (nickels == 1){
        std::cout << "You have " << nickels << " nickel.\n";
    }
    else {
        std::cout << "You have " << nickels << " nickels.\n";
    }

    if (dimes == 1){
        std::cout << "You have " << dimes << " dime.\n";
    }
    else {
        std::cout << "You have " << dimes << " dimes.\n";
    }

    if (quarters == 1){
        std::cout << "You have " << quarters << " quarter.\n";
    }
    else {
        std::cout << "You have " << quarters << " quarters.\n";
    }

    if (half_dollars == 1){
        std::cout << "You have " << half_dollars << " half dollar.\n";
    }
    else {
        std::cout << "You have " << half_dollars << " half dollars.\n";
    }


    double coins = (pennies + nickels + dimes + quarters + half_dollars + dollars) / 100;
    if (coins == 1){
        std::cout << "The value of all your coins is $" << coins << "." << std::endl; 
    }
    else {
        std::cout << "The value of all your coins is $" << coins << "." << std::endl; 
    }

    return 0;

}