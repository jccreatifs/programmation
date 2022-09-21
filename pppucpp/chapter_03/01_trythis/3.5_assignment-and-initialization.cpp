#include <iostream>

int main()
{
    std::string previous = " ", current;
    std::cout << "Enter a word: ";
    while (std::cin >> current){
        if (previous == current)
            std::cout << "Repeated word: " << current << "\n";
            previous = current;
    }

    return 0;
}