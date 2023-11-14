#include "strlib.h"

char* mystrstr(char* str1, char* str2) 
{
    char* p1, * p2;
    while (*str1) 
    {
        p1 = str1;
        p2 = str2;
        while (*p1 && *p2 && *p1 == *p2) 
        {
            p1++;
            p2++;
        }
        if (!*p2) 
        {
            return str1;
        }
        str1++;
    }
    return nullptr;  
}
