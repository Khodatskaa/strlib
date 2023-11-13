#include "strlib.h"
#include <cstring>

char* mystrcat(char* str1, const char* str2) {
    char* ptr = str1 + strlen(str1);
    while (*str2 != '\0') {
        *ptr++ = *str2++;
    }
    *ptr = '\0';
    return str1;
}
