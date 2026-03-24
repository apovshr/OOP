#include "MyArray.h"
#include <iostream>

// метод виводу масивів
void MyArray :: print()
{
    for(int i = 0; i < size; i++)
    {
        std::cout << "Елемент "<< i+1 << " : " << array[i] << "\n";
    }

    std::cout << std::endl; 
}
