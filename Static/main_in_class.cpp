#include <iostream>

class Entity
{
public:
    static int nano;
};

int Entity::nano;

int main()
{
    Entity e1, e2;

    e1.nano = 55;
    e2.nano = 66;

    std::cout << e1.nano << std::endl;
    std::cin.get();
}

/* Creating static variable inside the class will create only
   one apprence whenever that class is take place */
