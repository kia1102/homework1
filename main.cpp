#include <iostream>
#include "buildinfo.h"
int main(int, char **)
{
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;
}
