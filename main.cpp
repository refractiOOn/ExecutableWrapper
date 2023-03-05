#include <iostream>
#include "Executable.hpp"

void PrintHello(const std::string& name)
{
    std::cout << "Hello, " << name << std::endl;
}

int main(int, char**) {
    std::cout << "Hello, world!\n";

    Executable exec(PrintHello, "Roman");

    exec();
}