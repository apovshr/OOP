#include "Time.h"

// функція переведення часу у 12-годинний формат
void Time :: twelveHrsFormat(int *newHrs, std::string *period)
{
    if (hrs >= 12)
    {
        *newHrs = (hrs > 12) ? (hrs - 12) : 12; // якщо 12 година, то залишаємо число без змін. якщо ні, переводимо
        *period = "pm";
    }
    else 
    {
        *newHrs = (hrs == 0) ? 12 : hrs; // якщо час 00, то змінюємо на 12 
        *period = "am";
    }
}
