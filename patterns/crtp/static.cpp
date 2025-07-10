// static.cpp

#include <iostream>

template <class Derived>
class Shape {
 public:
  void Draw() const {
    static_cast<const Derived*>(this)->Draw();
  }
};

class Square : public Shape<Square> {
 public:
  void Draw() const {
    std::cout << "Drawing a square\n";
  }
};

class Circle : public Shape<Circle> {
 public:
  void Draw() const {
    std::cout << "Drawing a circle\n";
  }
};

int main() {
  Circle circle;
  Square square;

  circle.Draw();
  square.Draw();

  return 0;
}
