#include "strlib.h"

int mystrlen(const char* str)
{
    int len = 0;

    while (*str++ != '\0')
    {
        len++;
    }
    return len;
}