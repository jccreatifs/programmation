/* Programming Principles and Practicecs Using C++
 * Chapter 3.03 Exercise
 * 
 * A program that doesn’t do anything, but declares a number of variables with
 * legal and illegal names (such as int double = 0;), so that you can see how the compiler reacts.
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

    int double = 0;
    char bool = 'm';
    char _test_name {'7'};
    

    return 0;

}