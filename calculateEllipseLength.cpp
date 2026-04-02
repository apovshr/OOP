#include "Ellipse.h"
#include <cmath>

// метод рахунку довжини еліпса
double Ellipse :: calculateEllipseLength()
{
    double length = 4 * (((M_PI * a * b) + (a - b)) / (a + b));
    return length;
}
