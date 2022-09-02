#include <iostream>

int main(){

    // Declare the relevant figures used by the business
    const double rate_small_room {25.0};
    const double rate_big_room {35.0};
    const double tax_rate {0.06};

    // Advertise the services
    std::cout << "Frank's Carpet Cleaning Services\n"
              << "Charges:\n";
    std::cout << "\t$" << rate_small_room << " per small room\n"
              << "\t$" << rate_big_room << " per big room\n";
    std::cout << "Sales tax rate is " << tax_rate * 100 << "%\n"
              << "Estimates are valid for 30 days\n"
              << std::endl;


    // Prompt the user for the number of small rooms they would like cleaned
    std::cout << "How many number of small rooms would you like to be cleaned? ";
    int no_of_small_rooms {0};
    std::cin >> no_of_small_rooms;

    // Prompt the user for the number of large rooms they would like cleaned
    std::cout << "How many number of big rooms would you like to be cleaned? ";
    int no_of_big_rooms {0};
    std::cin >> no_of_big_rooms;
    std::cout << std::endl;

    // Calculations are done here
    double total_rate_small_rooms = no_of_small_rooms * rate_small_room;
    double total_rate_big_rooms = no_of_big_rooms * rate_big_room;
    double cost = total_rate_big_rooms + total_rate_small_rooms;
    double tax = cost * tax_rate;
    double total_cost = cost + tax;

    std::cout << "Estimate for carpet cleaning service\n"
              << "Number of small rooms: " << no_of_small_rooms << "\n"
              << "Number of big rooms: " << no_of_big_rooms << "\n"
              << "Price per small room: $" << rate_small_room << "\n"
              << "Price per big room: $" << rate_big_room << "\n"
              << "Cost: $" << cost << "\n"
              << "Tax: $" << tax << "\n"
              << "=====================================================\n"
              << "Total estimate: $" << total_cost << "\n"
              << "This estimate is valid for 30 days\n";
    
    return 0;
}