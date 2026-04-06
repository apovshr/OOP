#include <iostream>

class Rectangle 
{
    // зовнішні методи, дружні функції та конструктори
    public: 
        Rectangle () {x1 = y1 = x2 = y2 = 0;};
        Rectangle (int x1, int y1, int x2, int y2);
        Rectangle (int width, int height);
        friend std::ostream& operator<< (std::ostream &out, const Rectangle &object);
        void moveRectangle(int hor, int vert);
        void mirrorRectangle();
    private:
        int x1, y1, x2, y2; // змінні для координат прямокутника
};