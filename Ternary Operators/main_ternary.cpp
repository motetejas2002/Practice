#include <iostream>
#include <string>

static int s_Level = 1;
static int s_Speed = 2;

int main()
{   
    s_Speed = s_Level > 5 ? 10 : 5;

    std::string rank = s_Level > 5 ? "Beginner" : "Master";

    std::cout << s_Speed << "\t" << rank << std::endl;

    s_Speed = s_Level >= 1 ? rank == "Beginner" ? 100 : 200 : 25;

    std::cout << s_Speed << "\t" << rank << std::endl;

    std::cin.get();
}