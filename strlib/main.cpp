#include <iostream>
#include "strlib.h"

using namespace std;

int main()
{
	char input[10];
	cout << "Enter a number: ";
	cin >> input;

	int number = StringToNumber(input);

	cout << "Converted number: " << number << endl;

	return 0;
}