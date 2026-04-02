#include "Point.h"
#include <cmath>

// метод для рахунку дистанції
void Point :: distance()
{
    dis = sqrt(pow(coordinates[0], 2) + pow(coordinates[1], 2) + pow(coordinates[2], 2));
}
