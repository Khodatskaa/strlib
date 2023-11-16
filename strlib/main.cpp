#include <iostream>
#include "strlib.h"

using namespace std;

int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    char* strResult = NumberToString(number);

    cout << "Converted string: " << strResult << endl;

    delete[] strResult;

    return 0;
}