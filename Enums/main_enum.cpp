#include <iostream>

int main()
{
    enum Elements {
        A = 0, B, C, D, E
    };

    Elements valuea = A;
    Elements valueb = B;
    Elements valuec = C;
    Elements valued = D;
    Elements valuee = E;

    std::cout << valuea << valueb << valuec << valued << valuee << std::endl;
    std::cin.get();
}
