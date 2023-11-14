#include "strlib.h"

char* mystrchr(char* str, char s) 
{
    while (*str != '\0') 
    {
        if (*str == s) 
        {
            return str;  
        }
        str++;
    }
    return nullptr;  
}
