#include <iostream>
#include "Rectangle.h"

using namespace std;

// перевизначення оператору виводу << 
std::ostream& operator<< (std::ostream &out, const Rectangle &object)
{
    out << "{(" << object.x1 << ", " << object.y1 << "), (" << object.x2 << ", " << object.y2 << ")}";
    return out;
}

// функція перевірки правильності введення значення
void check (int &number)
{
    while (!(cin >> number))
    {
        cout << "\nПомилка у введенні значення, спробуйте ще раз!";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nВведіть значення: ";
    }
}

int main()
{
    // питаємо яким способом зробити прямокутник та робимо перевірку на правильність введенного варіант дії
    int choice, hor, vert, x1, x2, y1, y2, width, height;
    cout << "Оберіть метод створення прямокутника: \n1 - Стандартний (x1 = y1 = x2 = y2 = 0)";
    cout << "\n2 - Ввести свої значення кутів\n3 - Ввести довжину та ширину\nОберіть дію (1-3): ";

    while (!(cin >> choice) || choice > 3 || choice < 1)
    {
        cout << "\nПомилка у введенні варіанту дії, спробуйте ще раз!";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Оберіть дію (1-3):";
    }

    switch (choice)
    {
        // прямокутник, створений стандартним конструктором + його методи
        case 1:
        {
            Rectangle obj1;
            cout << "Початкові координати: " << obj1 << endl;
            cout << "Введіть на скільки перемістили горизантально: ";
            check(hor);
            cout << "Введіть на скільки перемістили вертикально: ";
            check(vert);
            obj1.moveRectangle(hor, vert);
            cout << "\nКоординати переміщеного прямокутника: " << obj1;
            obj1.mirrorRectangle();
            cout << "\nКоординати дзеркально відображеного прямокутника: " << obj1;
            break;
        }

        // прямокутник, створений додатковим конструктором, який питає сторони + його методи
        case 2:
        {
            cout << "Введіть x1: ";
            check(x1);
            cout << "Введіть y1: ";
            check(y1);
            cout << "Введіть x2: ";
            check(x2);
            cout << "Введіть y2: ";
            check(y2);
            Rectangle obj1 (x1, y1, x2, y2);
            cout << "Початкові координати: " << obj1 << endl;
            cout << "Введіть на скільки перемістили горизантально: ";
            check(hor);
            cout << "Введіть на скільки перемістили вертикально: ";
            check(vert);
            obj1.moveRectangle(hor, vert);
            cout << "\nКоординати переміщеного прямокутника: " << obj1;
            obj1.mirrorRectangle();
            cout << "\nКоординати дзеркально відображеного прямокутника: " << obj1;
            break;
        }

        case 3:
        {
            // прямокутник, створений додатковим конструктором, який питає ширину та довжину + його методи
            cout << "Введіть ширину: ";
            check(width);
            cout << "Введіть довжину: ";
            check(height);
            Rectangle obj1(width, height);
            cout << "Початкові координати: " << obj1 << endl; 
            cout << "Введіть на скільки перемістили горизантально: ";
            check(hor);
            cout << "Введіть на скільки перемістили вертикально: ";
            check(vert);
            obj1.moveRectangle(hor, vert);
            cout << "\nКоординати  переміщеного прямокутника: " << obj1;
            obj1.mirrorRectangle();
            cout << "\nКоординати дзеркально відображеного прямокутника: " << obj1;
            break;
        }
    }
}
