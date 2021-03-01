#include <iostream>
int main() 
{
    struct Vector
    {
        int x;
        int y;
        int z;
    };    
    Vector my_vector;
    my_vector.x = 4;
    int thirty;
    thirty = 0;
    while (thirty < 30){
        std::cout << my_vector.x;
    }
    std::cout << my_vector.x << std::endl;
    return 0;
}