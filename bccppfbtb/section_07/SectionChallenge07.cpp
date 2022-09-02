/* Section 07 Challenge
*/
#include <iostream>
#include <vector>

int main(){

    // Declare 2 empty vectors of integers named vector1 and vector2 respectively
    std::vector <int> vector1;
    std::cout << "Empty vector named vector1 created.\n";
    std::vector <int> vector2;
    std::cout << "Empty vector named vector2 created.\n\n";
    
    // Add contents to vector1
    vector1.push_back(10);
    std::cout << "Added '10' to vector1.at(0).\n";
    vector1.push_back(20);
    std::cout << "Added '20' to vector1.at(1).\n";

    std::cout << "vector1 now contains: "
              << vector1.at(0) << " and "
              << vector1.at(1) << ".\n"
              << "The size of vector1 is "
              << vector1.size() << " elements.\n" << std::endl;

    // Add contents to vector2
    vector2.push_back(100);
    std::cout << "Added '100' to vector2.at(0).\n";
    vector2.push_back(200);
    std::cout << "Added '200' to vector2.at(1).\n\n";

    // Vector2
    std::cout << "vector2 now contains: " 
              << vector2.at(0) << " and "
              << vector2.at(1) << ".\n"
              << "The size of vector2 is "
              << vector2.size() << " elements.\n" << std::endl;

    // vecor_2d
    std::vector <std::vector<int>> vector_2d;
    std::cout << "Empty 2D vector 'vector_2d' declared.\n";
    vector_2d.push_back(vector1);
    std::cout << "push_back() vector1 to vector_2d.\n";
    vector_2d.push_back(vector2);
    std::cout << "push_back() vector2 to vector_2d.\n\n";

    std::cout << "Contents of vector_2d" << std::endl;
    std::cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl;
    std::cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << std::endl;

    // reassignment
    vector1.at(0) = 1000;
    std::cout << "\n" << "Reassigned vector1.at(0)'s value to 1000.\n" << std::endl;
    std::cout << "The contents of vector_2d is now: " << std::endl;
    std::cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl;
    std::cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << std::endl;

    return 0;

}