#include <iostream>

static int hello(int a)
{
    return a * 2;
}

int main() 
{
    int result = hello(43);
    std::cout << "Result: " << result << std::endl;
}
