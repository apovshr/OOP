#include "MyArray.h"

// метод порівняння елементів масиву з х
int MyArray :: comparison(int x) 
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == x)
            count++;
    }
    return count;
}
