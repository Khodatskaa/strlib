#include <iostream>
#include "strlib.h"
using namespace std;

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Character to search: ";
    char searchChar;
    cin >> searchChar;

    char* result = mystrchr(str, searchChar);

    if (result != nullptr) 
    {
        cout << "Character '" << searchChar << "' found at position: " << result - str << endl;
    }
    else 
    {
        cout << "Character '" << searchChar << "' not found in the string" << endl;
    }

    return 0;
}
