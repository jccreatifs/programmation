#include <iostream>

int main(){
   
    std::cout << "Please enter your favorite number between 0 to 100: ";
    int favorite_number = 0;
    std::cin >> favorite_number;

    std::cout << "Amazing! That's my favorite number too! " << std::endl;
    std::cout << "No really! " << favorite_number << " is my favorite number!" << std::endl;

    return 0;
}