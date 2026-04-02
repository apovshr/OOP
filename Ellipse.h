#include "Circle.h"

class Ellipse 
{
    // в зовнішній частині вказуємо додатковий конструктор та метод порівняння довжин еліпса та кола 
    public:
        Ellipse(double a, double b) {this->a = a; this-> b = b;}
        double calculateDifference(const Circle& circle);

    // в приватній частині вказуємо метод виведення інформації, рахунку довжини еліпса, атрибути
    private:
        void printInfo(double lengthCircle, double lengthEllipse, double ratio);
        double calculateEllipseLength();
        double a, b;
};
