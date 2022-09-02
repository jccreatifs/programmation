/* Exercises Section 1.4.2
** Exercise 1.13
**
** A program that uses `for` to sum the numbers from 50 to 100
*/

#include <iostream>

int main(){

/*    int sum = 0, val = 50;

    while(val <= 100){
        sum += val;
        ++val;
    }
*/
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;

    std::cout << "The sum all integral numbers from 50 to 100 is " << sum << std::endl;
    // Outputs with the value of `sum` as 3825.
 return 0;   
}