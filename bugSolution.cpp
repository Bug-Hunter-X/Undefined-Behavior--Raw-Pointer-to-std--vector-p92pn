#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec; 
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
  }

  // Safe iteration using iterators
  for (int& val : vec) { 
    val *= 2; // Example modification
  }

  for (int val : vec) {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  //Alternative using at() for bounds checking
  for (size_t i = 0; i < vec.size(); i++){
    std::cout << vec.at(i) << " ";
  }
  std::cout << std::endl;
  return 0;
} 