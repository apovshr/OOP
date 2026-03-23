//лабораторна 3 

#include "SquareDiagonal.h"
#include <iostream>

using namespace std; 

// основна функція
int main() 
{
    // питаємо значення сторони
    double a; 
    cout << "Введіть значення сторони квадрату: ";

    // перевірка на те, чи користувач ввів число
    while (!(cin >> a))
    {
        cout << "\nПомилка! Введіть число!\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Введіть значення сторони квадрату: ";
    }

    // вивід сторони
    cout << "Сторона квадрату = " << a;

    // метод через покажчик
    cout << "\n\nМетод через покажчик: \n";
    SquareDiagonal *new_obj = new SquareDiagonal();
    new_obj -> setA(a);
    cout << "Діагональ квадрату через покажчик = " << new_obj -> diagonalSquare() << endl << endl;

    // метод через змінну-об'єкт
    cout << "Метод через змінну-об'єкт: \n";
    SquareDiagonal new_obj2;
    new_obj2.setA(a);
    cout << "Діагональ квадрату через об'єкт = " << new_obj2.diagonalSquare();
    
    // видалення динамічної пам'яті
    delete new_obj;
}
