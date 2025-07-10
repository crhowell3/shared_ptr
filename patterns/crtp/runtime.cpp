#include <iostream>
#include <memory>
#include <vector>

/**
 * @class Shape
 * @brief Shape interface
 */
class Shape {
 public:
  virtual void Draw() const = 0;
  virtual ~Shape() = default;
};

/**
 * @class Square
 * @brief Derived Shape class representing a square
 */
class Square : public Shape {
 public:
  void Draw() const override {
    std::cout << "Drawing a square\n";
  }
};

/**
 * @class Circle
 * @brief Derived Shape class representing a circle
 */
class Circle : public Shape {
 public:
  void Draw() const override {
    std::cout << "Drawing a circle\n";
  }
};

int main() {
  std::vector<std::unique_ptr<Shape>> shapes;

  shapes.push_back(std::make_unique<Circle>());
  shapes.push_back(std::make_unique<Square>());

  for (const auto& shape : shapes) {
    shape->Draw();
  }

  return 0;
}
