#include "MyArray.h"

// Додатковий конструктор (конструктор ініціалізації)
MyArray :: MyArray(int n)
{
    size = n;
    array = new int[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = 1;
    }
}
