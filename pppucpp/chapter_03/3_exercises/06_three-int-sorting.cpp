/* Programming Principles and Practicecs Using C++
 * Chapter 3.06 Exercise
 * 
 * A program that prompts the user to enter three integer values, and
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
    std::cout << "Please enter three integers, separated by spaces: ";
    
    int a {0}, b {0}, c {0};
    std::cin >> a >> b >> c;
    std::cout << "\n" << std::endl;
    // Declare holders for sequenced integers
    int i {0}, j {0}, k {0};

    // Probably a noob way to sort 
    // a and b
    if (a == b) {
        i = a;
        j = b;
        k = c;
        std::cout << i << ", " << j << ", " << k << "\n" << std::endl;
    }
    else if (a < b){
        if (a == c){
            i = a;
            j = c;
            k = b;
            std::cout << i << ", " << j << ", " << k << "\n" << std::endl;
        }
        else if (a < c){
            i = a;
            std::cout << i << ", ";
            if (b == c){
                j = b;
                k = c;
                std::cout << j << ", " << k << "\n" << std::endl;
             }
            else if (b < c){
                j = b;
                k = c;
                std::cout << j << ", " << k << "\n" << std::endl;
            }
            else {
                j = c;
                k = b;
                std::cout << j << ", " << k << "\n" << std::endl;
            }
        }
        else {
            i = c;
            j = a;
            k = b;
            std::cout << i << ", " << j << ", " << k << "\n" << std::endl;
        }
    }

    // b and c
    else if (b == c){
        i = b;
        j = c;
        k = a;
        std::cout << i << ", " << j << ", " << k << "\n" << std::endl;
    }
    else if (b < c){
        i = b;
        std::cout << i << ", ";
        if (c < a){
            j = c;
            k = a;
            std::cout << j << ", " << k << "\n" << std::endl;
        }
        else {
            j = a;
            k = c;
            std::cout << j << ", " << k << "\n" << std::endl;
        }
    }

    // c and a
    else if (c == a){
        i = c;
        j = a;
        k = b;
    }
    else // (c < a)
    {
        i = c;
        std::cout << i << ", ";
        if (a < b){
            j = a;
            k = b;
            std::cout << j << ", " << k << "\n" << std::endl;
        }
        else {
            j = b;
            k = a;
            std::cout << j << ", " << k << "\n" << std::endl;
        }
    }

    return 0;

}