/* Exercises Section 1.4.1
** Exercise 1.09
**
** A program that uses `while` to sum the numbers from 50 to 100
*/

#include <iostream>
    
int main(){

    int sum = 0, val = 50;

    while(val <= 100){
        sum += val;
        ++val;
    }
    std::cout << "The sum all integral numbers from 50 to 100 is " << sum << std::endl;
    // Outputs with the value of `sum` as 3825.

 return 0;   
}