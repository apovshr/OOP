#include "SquareDiagonal.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

// основна функція
int main() 
{
    srand(time(0)); // для генерації завжди різних випадкових значень

    // оголошуємо змінні
    double a, total = 0; 
    int min, max;
    int choice;

    // створюємо масив з трьох квадратів (покажчики)
    SquareDiagonal* new_square[3];

    // перший квадрат
    cout << "Перший квадрат:\n\n";
    new_square[0] = new SquareDiagonal();
    new_square[0]->diagonalSquare(); // обислення діагоналі
    new_square[0]->sumOfDiagonals(); // обчислнення суми діагоналей
    new_square[0]->printInfo(1); // вивід усієї інформації про об'єкт

    // другий квадрат
    cout << "\nДругий квадрат:\n";
    cout << "Введіть значення сторони квадрату: ";

    // перевірка на те, чи користувач ввів число
    while (!(cin >> a))
    {
        cout << "\nПомилка!\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Введіть значення сторони квадрату: ";
    }

    cout << endl; 

    // потворення дій минулого квадрату, але вже з зазначеною стороною від користувача
    new_square[1] = new SquareDiagonal();
    new_square[1]->setA(a);
    new_square[1]->diagonalSquare();
    new_square[1]->sumOfDiagonals();
    new_square[1]->printInfo(2);


    // третій квадрат
    cout << "Третій квадрат:\n";    
    cout << "Введіть мінімальне значення (більше 0): ";
            
    // перевірка на те, чи користувач ввів число у діапазоні допустимих значень
    while (!(cin >> min) || min <= 0)
    {
        cout << "\nПомилка!\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Введіть мінімальне значення (більше 0): ";
    }

    cout << "Введіть максимальне значення (більше min): ";

    // перевірка на те, чи користувач ввів число у діапазоні допустимих значень
    while (!(cin >> max) || max <= min)
    {
        cout << "\nПомилка!\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Введіть максимальне значення (більше min): ";
    }

    cout << endl;

    // повторення дій минулих варіантів дій, але об'єкт створився додатковим конструктором
    new_square[2] = new SquareDiagonal(min, max);
    new_square[2]->diagonalSquare();
    new_square[2]->sumOfDiagonals();
    new_square[2]->printInfo(3);

    // загальна сума всіх діагонелей квадратів
    for (int i = 0; i < 3; i++)
    {
        total += new_square[i]->sumOfDiagonals();
    }

    cout << "Загальна сума діагоналей усіх квадртаів = " << total;

    // видалення пам'яті 
    for (int i = 0; i < 3; i++)
    {
        delete new_square[i];
    }
}
