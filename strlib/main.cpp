#include <iostream>
#include "strlib.h"
using namespace std;

int main() 
{
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    int result = mystrcmp(str1, str2);

    if (result < 0) 
    {
        cout << "String 1 is less than string 2" << endl;
    }
    else if (result > 0) 
    {
        cout << "String 1 is greater than string 2" << endl;
    }
    else 
    {
        cout << "String 1 is equal to string 2" << endl;
    }

    return 0;
}
