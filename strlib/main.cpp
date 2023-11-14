#include <iostream>
#include "strlib.h"
using namespace std;

int main()
{
    char str1[100]; 
    const char* str2;

    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));

    cout << "Enter the second string: ";
    char input[100];
    cin.getline(input, sizeof(input));
    str2 = input;

    char* ptr = str1;
    while (*ptr != '\0')
    {
        ptr++;
    }

    if (ptr != str1) 
    {
        *ptr++ = ' '; 
    }

    while (*str2 != '\0') 
    {
        *ptr++ = *str2++;
    }
    *ptr = '\0';

    cout << "After concatenation: " << str1 << endl;

    return 0;
}
