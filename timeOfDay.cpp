#include "Time.h"

// функція рахування часу доби 
bool Time :: timeOfDay()
{
    if (5 < hrs && hrs < 17) // ранок - день
        return true;
    else 
        return false; 
}
