/*
 * Programming Principles and Practicecs Using C++
 * Chapter 3
 * 
 * Simple program to check repeated words.
 */

#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
	
	std::cout << "Enter a word: ";
	std::string previous = " ";
	std::string current;
	
	std::cout << "This is a repeated word detection program.\n";

	while (std::cin >> current){
		if (previous == current)
			std::cout << "Repeated word: " << current << std::endl;
		previous = current; 
	}

    return 0;
}
