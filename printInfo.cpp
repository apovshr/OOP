#include "SquareDiagonal.h"
#include <iostream>

using namespace std;

// метод виведення інформації про квадрат на екран 
void SquareDiagonal :: printInfo(int num)
{
    cout << "Інформація про " << num << " квадрат: " << endl;
    cout << "Сторона квадрату = " << a << endl;
    cout << "Діагоналі = " << d << endl;
    cout << "Сума діагоналей = " << sum << endl << endl;
}
