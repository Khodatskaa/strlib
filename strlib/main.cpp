#include <iostream>
#include "strlib.h"

using namespace std;

int main()
{
    char input[100];

    cout << "Enter a string: ";
    cin.getline(input, sizeof(input));  

    LowerCase(input);

    cout << "The string in lowercase: " << input << endl;

    return 0;
}
