#include <iostream>
#include "strlib.h"

using namespace std;

int main()
{
    char input[100];

    cout << "Enter a string: ";
    cin.getline(input, sizeof(input));  

    UpperCase(input);

    cout << "The string in uppercase: " << input << endl;

    return 0;
}
