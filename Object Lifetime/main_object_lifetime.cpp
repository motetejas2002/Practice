#include <iostream>
#include <string>

class Entity {
public:
  Entity() {
    std::cout << "Entity is created" << std::endl;
  }

  ~Entity() {
    std::cout << "Entity is destroyed" << std::endl;
  }
};

class ScopedPtr {
private:
  Entity* m_Ptr;
public:
  ScopedPtr(Entity* ptr) : m_Ptr(ptr) {}

  ~ScopedPtr() {
    delete m_Ptr;
  }
};

int main() {
  {
    ScopedPtr e = new Entity();
  }
  
  std::cin.get();
}
