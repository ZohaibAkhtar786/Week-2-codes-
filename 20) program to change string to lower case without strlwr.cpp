#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);


    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }

    cout << "String in lower case: " << str;

    return 0;
}

