#include <iostream>

class Entity
{
    int nano = 15;
    mutable int nana = 10;
public:
    int Function() const
    {
        nana++;
        
        return nano;
    }
};

int main()
{
    Entity e;

    std::cout << e.Function() << std::endl;
    
    const char* const message = "Message";

    std::cout << message << std::endl;

    return 0;
}
