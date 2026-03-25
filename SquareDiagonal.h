// клас діагоналі квадрата
class SquareDiagonal 
{
    // функція для становлення значення сторони квадрата + функція для рахунку діагоналі 
    public:
        void setA(double a) {this -> a = a;}
        double diagonalSquare();
        SquareDiagonal(){a = 2;}; // стандартний конструктор, де сторона = 2
        SquareDiagonal(int min, int max); // додатковий конструктор
        void printInfo(int num); // метод виведення інформації на екран
        double sumOfDiagonals(); // метод рахунку суми діагоналей
    private: 
        double a, d, sum;
};
