/*
 * Programming Principles and Practicecs Using C++
 * Chapter 3
 * 
 * Simple program to exercise operators.
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
	
	std::cout << "Please enter an integral value: ";
	int n;
	std::cin >> n;
	std::cout << "Number = " << n
			  << "\nNumber + 1 = " << n + 1
			  << "\nThree times number = " << n * 3
			  << "\nTwice number = " << n + n
			  << "\nNumber squared = " << n * n
			  << "\nHalf of the number = " << n / 2
        << " with a remainder of " << n % 2
			  << "\nSquare root of the number is = " << std::sqrt(n)
			  << std::endl;

    return 0;
}
