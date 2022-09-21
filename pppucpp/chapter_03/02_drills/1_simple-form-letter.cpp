/* Programming Principles and Practicecs Using C++
 * Chapter 3
 * 
 * A program that produces a simple form letter based on user input.
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

    // 1.
    std::cout << "Enter the name of the person you want to write to: ";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "\n\nDear " << first_name << "," << std::endl;

    // 2.
    std::cout << "\n\tHow are you I'm fine thank you? I am writing you a letter\n"
              << "with a console program. How cool is that? No? Oh.\n"
              << "\n\tOkay then. ";

    // 3.
    std::cout << "What's the name of your friend? ";
    std::string friend_name;
    std::cin >> friend_name;
    std::cout << "\nHave you seen " << friend_name << " lately?\n" << std::endl;

    // 4.
    char friend_sex {0};
    std::cout << "\tWhat's your friend's sex?\n"; 
    std::cout << "Please enter \"m\" if your friend is male,\n"
              << "or \"f\" if your friend is female: ";
    std::cin >> friend_sex;
    if (friend_sex == 'm'){
        std::cout << "\nIf you see " << friend_name << ", please ask him to call me.\n";
    }
    else if (friend_sex == 'f'){
        std::cout << "\nIf you see " << friend_name << ", please ask her to call me.\n";
    }

    // 5.
    std::cout << "What is your age? " << std::endl;
    int age {0};
    std::cin >> age;

    if (age <= 0 or age >= 110){
        simple_error("You're kidding!");
    }
    else {
        std::cout << "\n\tI hear you just had a birthday and you are " << age << " years old." << std::endl;
    }
    
    // 6.
    if (age < 12){
        std::cout << "Next year you will be " << age + 1 << ".\n";
    }
    if (age == 17){
        std::cout << "Next year you will be able to vote.\n";
    }
    if (age > 70){
        std::cout << "I hope You're enjoying retirement.\n";
    }


    // 7.
    std::cout << "\n\nYours sincerely,\n"
              << "\n\nxFAQ42" << std::endl;


    return 0;

}