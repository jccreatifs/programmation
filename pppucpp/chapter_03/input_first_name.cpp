/*
 * Programming Principles and Practicecs Using C++
 * Chapter 3
 * 
 * Read and write a first name
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    std::cout << "Enter your name: ";
	std::string first_name;
	std::cin >> first_name;
	std::cout << "Hello, " << first_name << "!\n";
	//keep_window_open();
	
    return 0;
}
