#include <iostream>
#include "strlib.h"
using namespace std;

int main() 
{
    char str1[100];
    char str2[100];

    cout << "Enter string 1: ";
    cin.getline(str1, 100);

    cout << "Enter string 2: ";
    cin.getline(str2, 100);

    char* p = mystrstr(str1, str2);

    if (p == nullptr) 
    {
        cout << "String 2 is not a substring of string 1" << endl;
    }
    else {
        cout << "String 2 is a substring of string 1" << endl;
        cout << "The substring starts at index " << p - str1 << endl;
    }

    return 0;
}
