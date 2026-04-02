#include "Point.h"
#include <iostream>

using namespace std;

// функція вираховування, яка точка найближча до початку координат 
void closestPoint(const Point& obj1, const Point& obj2)
{
    cout << endl << endl;
    if (obj1.dis < obj2.dis)
    {
        cout << "Найближча точка до початку координат = ("<< obj1.coordinates[0] << "; " << obj1.coordinates[1] << "; " << obj1.coordinates[2] << ")" << endl;
        cout << "Дистанція до початку координат = " << obj1.dis;
    }
    else if (obj2.dis < obj1.dis)
    {
        cout << "Найближча точка до початку координат = ("<< obj2.coordinates[0] << "; " << obj2.coordinates[1] <<  "; " << obj2.coordinates[2] << ")" << endl;
        cout << "Дистанція до початку координат = " << obj2.dis;
    }
    else
    {
        cout << "Обидві точки знаходяться на однаковій відстані від початку координат, їхні значення:" << endl;
        cout << "Точка 1: " << "("<< obj1.coordinates[0] << "; " << obj1.coordinates[1] << "; " << obj1.coordinates[2] << ")" << endl;
        cout << "Точка 2: " << "("<< obj2.coordinates[0] << "; " << obj2.coordinates[1] << "; " << obj2.coordinates[2] << ")" << endl;
        cout << "Дистанція до початку координат = " << obj2.dis;
    }
}

int main()
{
    // створюємо змінні для вибору та координат точок, а також даємо варіанти дій
    int choice;
    double x, y, z;

    cout << "Програма для опису точки у просторі" << endl;
    cout << "Оберіть дію: " << endl;
    cout << "1 - Порахувати точки з координатами p1(1; 1; 1) та p2(1; 1; 1)" << endl;
    cout << "2 - Ввести свої значення точки\nОберіть дію (1-2): ";

    // перевірка на правильність вводу варіанту дії
    while(!(cin >> choice) || choice < 1 || choice > 2)
    {
        cout << "Помилка при введенні варіанту дії, спробуйте ще раз!";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Оберіть дію (1-2): ";
    }

    // switch case для кожного варіанту дії
    switch (choice)
    {
        case 1: 
        {
            Point obj1;
            Point obj2;
            closestPoint(obj1, obj2);
            break;
        }

        case 2:
        {
            cout << "Введіть координати для  p1(x y z): ";
            while (!(cin >> x >> y >> z))
            {
                cout << "Помилка з введенням координаті, спробуйте ще раз!" << endl;
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Введіть координати для  p1(x y z): ";
            }

            Point obj1(x, y, z);

            cout << "Введіть координати для  p2(x y z): ";
            while (!(cin >> x >> y >> z))
            {
                cout << "Помилка з введенням координаті, спробуйте ще раз!" << endl;
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Введіть координати для  p2(x y z): ";
            }
            Point obj2(x, y, z);

            closestPoint(obj1, obj2);
            break;
        }     
    }
}
