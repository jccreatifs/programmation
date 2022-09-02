/* Exercises Section 1.4.2
** Exercise 1.13
** 
** A program that prompts the user for two integers, 
** then print each number in the range specified by those two integers.
*/


#include <iostream>

int main(){

    int nput1 = 0, nput2 = 0; 
    std::cout << "Enter 2 integers: ";
    std::cin >> nput1 >> nput2;

/*  while(nput1 < nput2){
        std::cout << nput1 << std::endl;
        ++nput1;
    }
*/
    for (int i = nput1; i < nput2; i++)
        std::cout << i << " ";
        
    std::cout << std::endl;

 return 0;   
}