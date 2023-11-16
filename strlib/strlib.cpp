#include "strlib.h"

void UpperCase(char* str)
{
    while (*str)
    {
        *str = char(*str - 32);
        str++;
    }
}
