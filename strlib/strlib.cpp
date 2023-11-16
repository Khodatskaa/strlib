#include "strlib.h"

int mystrcmp(const char* str1, const char* str2) 
{
    while (*str1 && (*str1 == *str2)) 
    {
        str1++;
        str2++;
    }

    return static_cast<unsigned char>(*str1) - static_cast<unsigned char>(*str2);
}