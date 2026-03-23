#include "Time.h"

using namespace std;

int main()
{
    // задаємо змінні 
    int hrs, min, newHrs;
    string period;

    // просимо ввести години та робимо перевірку
    cout << "Введіть години (0 - 23): ";

    while (!(cin >> hrs) || 0 > hrs || hrs > 23)
    {
        cout << "\nПомилка! Не правильно введені години, спробуйте ще раз!";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nВведіть години: ";
    }

    // повторюємо теж саме з хвилинами
    cout << "\nВведіть хвилини (0 - 59): ";
    
    while (!(cin >> min) || 0 > min || min > 59)
    {
        cout << "\nПомилка! Не правильно введені хвилини, спробуйте ще раз!";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nВведіть хвилини: ";
    }

    // виводимо початковий час
    cout << "\n\nВведений час: ";
    if (min < 10)
        cout << hrs << " : 0" << min;
    else 
        cout << hrs << " : " << min;

    // створюємо новий об'єкт та даємо значення зміних класу для розрахунків
    Time new_time;
    new_time.setHrsMin(hrs, min);

    // перевірка часу доби
    if (new_time.timeOfDay())
        cout << "\nЗазначений час є першою половиною дня (ранок - день)" << endl;
    else 
        cout << "\nЗазначений час є другою половиною дня (вечір - ніч)" << endl;

    // вивід часу у 12-годинному форматі
    new_time.twelveHrsFormat(&newHrs, &period);

    cout << "Час у 12 годинному форматі: ";
    if (min < 10)
        cout << newHrs << " : 0" << min << " " << period; 
    else 
        cout << newHrs << " : " << min << " " << period; 
}
