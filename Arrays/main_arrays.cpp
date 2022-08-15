#include <iostream>

int main()
{
    int example[5];
    int* ptr = example;

    for (int i = 0; i < 5; i++)
        example[i] = 2;

    example[2] = 5;

    for (int i = 0; i < 4; i++)
    {
        *(int*)((char*)ptr + i) = 255;
    }

    example[1] = -2;
    
    std::cout << example[0] << std::endl;
    return 0;
}
