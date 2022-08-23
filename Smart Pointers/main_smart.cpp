#include <iostream>
#include <string>
#include <memory>

class Entity {
public:
  Entity() {
    std::cout << "Entity is created" << std::endl;
  }

  ~Entity() {
    std::cout << "Entity is destroyed" << std::endl;
  }

  void Print() {
    std::cout << "This is just a printable function" << std::endl;
  }
};

int main() {
  {
    // std::unique_ptr<Entity> entity(new Entity());
    // For getting a head of exception new way to allocate this is

    std::unique_ptr<Entity> entity = std::make_unique<Entity>();

    entity -> Print();
  }

  {
    std::shared_ptr<Entity> e0;
    {
      std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
      e0 = sharedEntity;
    }
  }
}
