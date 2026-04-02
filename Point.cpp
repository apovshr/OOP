#include "Point.h"
#include <iostream>

// стандартний конструктор
Point :: Point()
{
    coordinates[0] = coordinates[1] = coordinates[2] = 1;
    distance();
}

// додатковий конструктор
Point :: Point(double x, double y, double z)
{
   coordinates[0] = x;
   coordinates[1] = y;
   coordinates[2] = z;
   distance();
}
