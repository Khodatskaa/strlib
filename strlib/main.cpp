#include <iostream>
#include "strlib.h"
using namespace std;

int main() 
{
    const int MAX_LENGTH = 1000;

    char str1[MAX_LENGTH];
    cout << "Enter a sentence to copy: ";
    cin.getline(str1, MAX_LENGTH);

    char str2[MAX_LENGTH];

    char* result = mystrcpy(str2, str1);

    cout << "Copied string: " << result << endl;

    return 0;
}