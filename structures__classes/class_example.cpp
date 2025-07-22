#include <iostream>

class Rectangle {
public:
  Rectangle(int w, int h) : width(w), height(h) {}
  int area() const { return width * height; }

private:
  int width;
  int height;
};

int main() {
  Rectangle rect(5, 4);
  std::cout << "Area: " << rect.area() << std::endl;
  return 0;
}
