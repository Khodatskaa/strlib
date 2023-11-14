#include <iostream>
#include "strlib.h"
using namespace std;

int main()
{
	char str[1000];
	cout << "Enter a string: ";
	gets_s(str);
	cout << "The length of string is: " << mystrlen(str) << endl;
}