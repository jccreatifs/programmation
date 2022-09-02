/* Exercises Section 1.4.2
** Exercise 1.13
**
** A program that uses the decrement operator in a `for` loop that prints the numbers from ten to zero 
*/


#include <iostream>

int main(){

/*    int counter = 10;

    while(counter >= 0){
        std::cout << counter << std::endl;
        --counter;
    }
*/
    for (int i = 10; i >=0; --i)
        std::cout << i << std::endl;

 return 0;   
}