#include <iostream>
#include <string>

class Entity {
public:
  int x, y;

  Entity(int x, int y) {
    this -> x = x;
    this -> y = y;
  }
};

std::ostream& operator<<(std::ostream& stream, const Entity& other) {
  stream << other.x << ", " << other.y;
  return stream;
}

int main() {
  Entity ninja(23, 34);
  std::cout << ninja << std::endl;
  std::cin.get();
}
