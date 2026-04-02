#include "Ellipse.h"
#include "Circle.h"

// метод порівняння довжин еліпса та кола
double Ellipse :: calculateDifference(const Circle& circle)
{
    double lengthEllipse = calculateEllipseLength();
    double lengthCircle = circle.calculateCircleLength();

    double ratio = lengthEllipse / lengthCircle;

    printInfo(lengthCircle, lengthEllipse, ratio);

    return ratio;
}
