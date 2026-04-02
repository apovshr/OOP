#include "Ellipse.h"
#include <iostream>

using namespace std;

// метод виведення усієї інформації 
void Ellipse :: printInfo(double lengthCircle, double lengthEllipse, double ratio)
{
    cout << "\n\nДовжина кола = " << lengthCircle << endl;
    cout << "Довжина еліпса = " << lengthEllipse << endl;
    cout << "Довжина еліпса більше довжини кола у " << ratio << " раз/ів" << endl;
}
