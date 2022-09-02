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
	
	std::cout << "Please enter a floating-point value: ";
	double number;
	std::cin >> number;
	std::cout << "Number = "					  << number
			  << "\nNumber + 1 = "				  << number + 1
			  << "\nThree times number = "		  << number * 3
			  << "\nTwice number = "			  << number + number
			  << "\nNumber squared = "			  << number * number
			  << "\nHalf of the number = "		  << number / 2
			  << "\nSquare root of the number = " << std::sqrt(number)
			  << std::endl;


    return 0;
}
