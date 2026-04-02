// клас точки
class Point 
{
    // зовнішні конструктор і friend метод
    public:
        Point();
        Point (double x, double y, double z);
        friend void closestPoint(const Point& obj1, const Point& obj2);

    // приватні змінні для координат та дистанції + метод рахунку дистанції
    private:
        double coordinates[3];
        double dis;
        void distance ();
};
