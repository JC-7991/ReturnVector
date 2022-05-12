#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num){
  int num2, num3;
  num2 = num * 2;
  num3 = num * 3;
  std::vector<int> nums = {num, num2, num3};
  return nums;
}


int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}