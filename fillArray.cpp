#include "MyArray.h"
#include <cstdlib>

// метод автоматичної ініціалізації масиву в заданому користувачем діапазоні.
void MyArray :: fillArray(int min, int max)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = min + rand()% (max - min + 1);
    }
}
