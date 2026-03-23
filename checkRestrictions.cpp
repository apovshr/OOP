#include "LinearEquation.h"

// функція булеан, яка буде повертати так/ні в залежності чи а в зоні допустимих значень 
bool LinearEquation :: checkRestrictions() 
{
    if (a != 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
