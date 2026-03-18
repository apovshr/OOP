#include <iostream>
#include <cmath>

using namespace std; // щоб завжди не писати std:: перед cout, cin 

void area(int a, int h, double *res) // функція для площі довільного трикутника
{
    *res = 0.5 * a * h;
}

void area (int c, int d, double angle, double *res) // функція для площі паралелограма
{
    *res = c * d * sin(angle);
}

void area (int r, double *res) // функція для площі кола
{
    *res = M_PI * pow(r, 2);
}

void area (double e, double f, double *res) // функція для площі прямокутника
{
    *res = e * f;
}

int main() {

    // вказуємо змінні
    int a, h, c, d, r, choice;
    double angle, result, e, f;
    bool check = false; // булеан для головного меню

    // головне меню
    while (!check) {

        // питаємо про вибір дії
        cout << "Оберіть фігуру для вираховування: \n1 - Довільний трикутник \n2 - Паралелограм ";
        cout << "\n3 - Коло \n4 - Прямокутник\n\nВведіть число дії: ";
        cin >> choice;

        // перевірка варіанту дії
        if (choice < 1 || choice > 4)
            cout << endl << "Помилка! Неправильно введений варіант дії! Спробуйте ще раз" << endl << endl;
        else
            check = true;

    }

    // switch case для кожного варіанту дії
    switch (choice)
    {

        // трикутник
        case 1:
            cout << endl << "Введіть довжину сторони трикутника (а): ";
            cin >> a;
            cout << "Введіть довжину висоти проведеної до сторони а (h): ";
            cin >> h;
            area(a, h, &result);
            cout << endl << "Площа трикутника: " << result;
            break;

        // паралелограм
        case 2:
            cout << endl << "Введіть довжину сторони c: ";
            cin >> c;
            cout << "Введіть довжину сторони d: ";
            cin >> d;
            cout << "введіть кут (у радіанах): ";
            cin >> angle;
            area(c, d, angle, &result);
            cout << "Площа паралелограма: " << result;
            break;

        // коло
        case 3:
            cout << endl << "Введіть радіус кола: ";
            cin >> r;
            area(r, &result);
            cout << endl << "Площа кола: " << result;
            break;

        // прямокутник
        case 4:
            cout << endl << "Введіть довжину сторони e: ";
            cin >> e;
            cout << "Введіть довжину сторони f: ";
            cin >> f;
            area(e, f, &result);
            cout << "Площа прямокутника: " << result;
            break;


    }

}