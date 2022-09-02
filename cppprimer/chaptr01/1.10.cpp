/* Exercises Section 1.4.1
** Exercise 1.10
**
** A program that uses the decrement operator in a `while` loop that prints the numbers from ten to zero 
*/

#include <iostream>

int main(){

    int counter = 10;

    while(counter >= 0){
        std::cout << counter << std::endl;
        --counter;
    }

 return 0;   
}