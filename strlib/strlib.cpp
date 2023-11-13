#include "strlib.h"

char* mystrcpy(char* str1, const char* str2) 
{
    char* original = str1;

    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';

    return original;
}
