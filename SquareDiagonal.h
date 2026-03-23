//лабораторна 3

// клас діагоналі квадрата
class SquareDiagonal 
{
    // встановлення значення сторони квадрата (інкапсуляція)
    public:
        void setA(double a) {this -> a = a;}
        double diagonalSquare();
    private: double a, d;
};
