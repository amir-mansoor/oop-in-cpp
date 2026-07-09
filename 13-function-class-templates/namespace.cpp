#include <iostream>

namespace first
{
    int var = 20;
}

namespace second
{
    int var = 30;
}

int main()
{
    // using namespace first;
    using namespace second;
    std::cout << first::var << std::endl;
    std::cout << second::var << std::endl;
    std::cout << var << std::endl;
    return 0;
}