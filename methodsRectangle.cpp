#include "Rectangle.h"

// додатковий конструктор з зазначеними сторонами 
Rectangle:: Rectangle(int x1, int y1, int x2, int y2)
{
    this-> x1 = x1;
    this-> y1 = y1;
    this-> x2 = x2;
    this-> y2 = y2;
}

// додатковий конструктор з зазначеними шириною і довжиною
Rectangle:: Rectangle(int width, int height)
{
    x1 = y1 = 0;
    x2 = width;
    y2 = height;
}

// метод зсуву прямокутника
void Rectangle:: moveRectangle(int hor, int vert)
{
    x1+= hor;
    x2+= hor;
    y1+= vert;
    y2+= vert;
}

// метод дзеркального відображення
void Rectangle:: mirrorRectangle()
{
    int w = x2 - x1;
    x2 = x1 - w;
}
