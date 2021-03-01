#include <iostream>
int main()
{
    int three;
    three = 3;
    int nine;
    nine = three*three;
    int eightyonesquared;
    eightyonesquared = 81*81;
    std::cout << "Program started" << std::endl;
    std::cout << "Running" << std::endl;
    std::cout << "Execution command 1:" << std::endl;
    std::cout << "3x3 is:" << std::endl;
    std::cout << nine << std::endl;
    std::cout << "Execution command 2:" << std::endl;
    std::cout << "9x9 is:" << std::endl;
    std::cout << nine*nine << std::endl;
    std::cout << "Execution command 3:" << std::endl;
    std::cout << "81x81 is:" << std::endl;
    std::cout << eightyonesquared << std::endl;
    std::cout << "Program finished" << std::endl;
    std::cout << "Program aborted" << std::endl;
    return 0;
}