#include <iostream>

void Increment(int &value)
{
    value++;
}

int main()
{
    int a = 8;
    Increment(a);
    std::cout << a << std::endl;

    return 0;
}
