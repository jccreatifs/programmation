/* Programming Principles and Practicecs Using C++
 * Chapter 3
 * 
 * A program that produces a simple form letter based on user input.
 */

//
#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{

// This block links this program to the input and output files
// I'm using for testing
#ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
#endif

// Solution starts here

    // 1.
    std::cout << "Enter the name of the person you want to write to: ";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Dear " << first_name << "," << std::endl;

    // 2.
    std::cout << "\tHow are you I'm fine thank you? I am writing you a letter "
              << "with a console program. How cool is that? None? Oh.\n"
              << "Okay then.\n";

    // 3.
    std::cout << "What's the name of your friend? ";
    std::string friend_name;
    std::cin >> friend_name;
    std::cout << "Have you seen " << friend_name << " lately?\n";

    // 4.
    char friend_sex {0};
    std::cout << "What's your friend's sex?\n"; 
    std::cout << "Please enter \"m\" if your friend is male,\n"
              << "or \"f\" if your friend is female: ";
    if (friend_sex == 'm'){
        std::cout << "If you see " << friend_name << ", please ask him to call me.\n";
    }
    else if (friend_sex == 'f'){
        std::cout << "If you see " friend_name << ", please ask her to call me.\n";
    }


    return 0;

}