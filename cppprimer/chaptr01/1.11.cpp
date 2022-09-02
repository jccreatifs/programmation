/* Exercises Section 1.4.1
** Exercise 1.11
**
** A program that prompts the user for two integers, 
** then print each number in the range specified by those two integers.
*/

#include <iostream>

int main(){

    int nput1 = 0, nput2 = 0; 
    std::cout << "Enter 2 integers: ";
    std::cin >> nput1 >> nput2;

    while(nput1 < nput2){
        std::cout << nput1 << std::endl;
        ++nput1;
    }

 return 0;   
}