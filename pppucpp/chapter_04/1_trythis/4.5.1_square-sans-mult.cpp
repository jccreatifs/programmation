#include <iostream>

int find_square(int n){
  int square {0};
  int i = n;
  while (i != 0){
    square = square + n;
    i--;
  }
  return square;
}

int main(){
  std::cout << find_square(9) << std::endl;

  return 0;
}
