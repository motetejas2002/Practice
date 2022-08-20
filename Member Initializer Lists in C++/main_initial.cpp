#include <iostream>
#include <string>

class Entity
{
    private:
        std::string m_Name;
    public:
        Entity() : m_Name("Unknnown") {}

        Entity(const std::string& name) : m_Name(name) {}

        const std::string& GetName() const
        {
            return m_Name;
        }
};

int main()
{
    Entity e0;
    std::cout << e0.GetName() << std::endl;

    Entity e1("Tejas");
    std::cout << e1.GetName() << std::endl;
    return 0;
}
