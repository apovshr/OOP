#include "SquareDiagonal.h"
#include <iostream>

// додатковий конструктор 
SquareDiagonal :: SquareDiagonal (int min, int max)
{
    a = min + std::rand() % (max - min + 1); // генеруємо випадкові значення у діапазоні
    d = 0;
    sum = 0;
}
