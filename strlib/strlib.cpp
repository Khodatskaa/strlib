#include "strlib.h"

void LowerCase(char* str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = char(*str + 32);
        }
        str++;
    }
}
