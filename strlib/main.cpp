#include <iostream>
#include "strlib.h"
using namespace std;

int main() 
{
    char str1[100];
    char str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    char* result = mystrcpy(str1, str2);

    cout << "Copied string: " << result << endl;

    return 0;
}
