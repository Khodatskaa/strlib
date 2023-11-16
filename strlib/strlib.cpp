#include "strlib.h"

int StringToNumber(char* str) 
{
    int result = 0;
    int sign = 1;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9') 
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}
