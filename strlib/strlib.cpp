#include "strlib.h"

char* mystrrev(char* str)
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }

    for (int i = 0, j = length - 1; i < j; i++, j--) 
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    return str;
}
