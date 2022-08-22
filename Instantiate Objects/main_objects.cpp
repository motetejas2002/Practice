#include <iostream>
#include <string>

using String = std::string;

class Entity
{
    private:
        String m_Name;
    public:
        Entity() : m_Name("Unkonwn") {}

        Entity(const String& name) : m_Name(name) {}

        const String& GetName() const
        {
            return m_Name;
        }
};

int main()
{
    // Entity entity;
    // std::cout << entity.GetName() << std::endl;

    Entity *e;
    {
        Entity* entity1 = new Entity("Tejas");
        e = entity1;
        std::cout << entity1 -> GetName() << std::endl;
    }

    delete e;
    std::cin.get();
}