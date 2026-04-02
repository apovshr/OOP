class Circle
{
    // в зовнішній частині вказуємо дружній клас та додатковий конструктор
    public:
        friend class Ellipse;
        Circle(double r) {this-> r = r;}

    // в приватній частині вказуємо атрибут та метод рахунку довжини
    private:
        double r;
        double calculateCircleLength() const;
};
