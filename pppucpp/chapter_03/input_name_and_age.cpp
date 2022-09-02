/*
 * Programming Principles and Practicecs Using C++
 * Chapter 3
 * 
 * Read and write name and age.
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
	std::cout << "Enter your age: ";
	double age;
	std::cin >> age;
	age *= 12;
	std::cout << "Hello, " << first_name << "!. You are " << age << " months old.\n";
	//keep_window_open();
	
    return 0;
}
