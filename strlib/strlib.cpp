#include "strlib.h"

char* NumberToString(int number) 
{
    int temp = number;
    int length = 0;

    while (temp != 0) 
    {
        temp /= 10;
        length++;
    }

    char* result = new char[length + 1];
    result[length] = '\0';

    for (int i = length - 1; i >= 0; i--) 
    {
        result[i] = '0' + number % 10;
        number /= 10;
    }

    return result;
}
