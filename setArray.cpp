#include "MyArray.h"
#include <iostream>

// метод заповнення елементів масиву користувачем
void MyArray :: setArray()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введіть значення " << i+1 << " елементу: ";
        std::cin >> array[i];
    }
}
