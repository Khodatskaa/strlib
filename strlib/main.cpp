#include <iostream>
#include <string>
#include "strlib.h"
using namespace std;

int main()
{
    string userSentence;
    cout << "Enter a sentence: ";
    getline(cin, userSentence);

    int length = mystrlen(userSentence);
    cout << "Length of the sentence: " << length << endl;

    return 0;
}