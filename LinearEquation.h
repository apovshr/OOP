class LinearEquation
{
    // робимо публічними функції для встановлення змінних, перевірки та розв'язку
    public:
        void setAB (double a, double b) 
        {
            this-> a = a;
            this-> b = b;
        };
        bool checkRestrictions();
        void solution(double *x);
    private:
        double a,b; // робимо змінні приватними
};

