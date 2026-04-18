// lambda.cpp

#include <functional>
#include <iostream>

void evaluator(std::function<void()> func) {
  func();  
}

int main() {
  auto lambda = []() {
    std::cout << "Lambda was executed" << std::endl;
  };

  evaluator(lambda);

  return 0;  
}
