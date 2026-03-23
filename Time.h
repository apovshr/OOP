#include <iostream>

// клас часу
class Time 
{
    // публічні функції сетеру часу, визначення часу доби та перевід у 12-годинний формат
    public:
        void setHrsMin(int hrs, int min)
        {
            this->hrs = hrs;
            this->min = min;
        }
        bool timeOfDay();
        void twelveHrsFormat(int *newHrs, std::string *period);
    private: 
        int hrs, min; // приватні атрибути      
};
