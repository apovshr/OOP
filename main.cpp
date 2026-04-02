#include "Circle.h"
#include "Ellipse.h"
#include <iostream>

using namespace std;

// метод для зібрання значень змінних
void getInfo(double &variable, string name)
{
    cout << "\nВведіть значення " << name << ": ";

    while(!(cin >> variable))
    {
        cout << "Помилка при введені " << name << ", спробуйте ще раз!" << endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Введіть значення " << name << ": ";
    }

}

int main() 
{
    // створюємо змінні
    int choice;
    string name;
    double a = 1.0, b = 1.0, r = 1.0; // початкові значення

    // питаємо чи користувач хоче рахувати по початковим значенням чи своїм
    cout << "З якими данними ви хочете рахувати Еліпс?" << endl;
    cout << "1 - За замовчуванням (a = b = 1)\n2 - Ввести свої координати" << endl;
    cout << "Оберіть 1 чи 2 варіант: ";

    // перевірка чи правильно вказали варіант дії 
    while(!(cin >> choice) || choice > 2 || choice < 1)
    {
        cout << "Помилка при введені варіанту дії, спробуйте ще раз!" << endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Оберіть 1 чи 2 варіант: ";
    }

    // якщо обрали другий варіант, просимо вказати значення змінних, інакше, працюємо з початковими
    if (choice == 2)
    { 
        getInfo(a, "a");
        getInfo(b, "b");
        
    }

    // створюємо об'єкт еліпсу
    Ellipse obj1(a, b);    

    // повторюємо ті ж дії з колом
    cout << "\n\nЗ якими данними ви хочете рахувати Коло?" << endl;
    cout << "1 - За замовчуванням (r = 1)\n2 - Ввести свої координати" << endl;
    cout << "Оберіть 1 чи 2 варіант: ";

    while(!(cin >> choice) || choice > 2 || choice < 1)
    {
        cout << "Помилка при введені варіанту дії, спробуйте ще раз!" << endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Оберіть 1 чи 2 варіант: ";
    }

    if (choice == 2)
    {
        getInfo(r, "r");
        
    }

    Circle obj2(r);
    obj1.calculateDifference(obj2); // функція для порівнняня довжин
}
