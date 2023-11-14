#include "strlib.h"

char* mystrcpy(char* str1, const char* str2) 
{
	char* res = str1;
	while ((*str1++ = *str2++) != '\0');
	return res;
}