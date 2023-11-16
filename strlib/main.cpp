#include <iostream>
#include "strlib.h"

using namespace std;

int main()
{
    char input[100];

    cout << "Enter a string: ";
    cin.getline(input, sizeof(input));  

    mystrrev(input);

    cout << "Reversed string: " << input << endl;

    return 0;
}
