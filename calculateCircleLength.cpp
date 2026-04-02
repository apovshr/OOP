#include "Circle.h"
#include <cmath>

// метод рахунку довжини кола
double Circle :: calculateCircleLength() const
{
    double length = 2 * M_PI * r;
    return length;
}
