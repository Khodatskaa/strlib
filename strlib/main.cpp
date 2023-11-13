#include <iostream>
#include "strlib.h"
using namespace std;

int main() 
{
    char sentence[100]; 
    char searchChar;

    cout << "Enter a sentence: ";
    cin.getline(sentence, sizeof(sentence));

    cout << "Enter a character to search for: ";
    cin >> searchChar;

    char* result = mystrchr(sentence, searchChar);

    if (result != nullptr)
    {
        cout << "Character '" << searchChar << "' found at position: " << result - sentence << endl;
    }
    else {
        cout << "Character '" << searchChar << "' not found in the string." << endl;
    }

    return 0;
}
