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
    int a = 2;
    int* b = new int;

    /* It is very important to know that when we allocate memory for class object on heap using
       new keyword the operator will initialize the constructor also it will not happen in malloc()
       function and delete keyword also calls destructor in the program */

    std::cin.get();
}