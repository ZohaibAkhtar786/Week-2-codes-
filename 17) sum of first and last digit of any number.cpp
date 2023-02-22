#include <iostream>
using namespace std;

int main()
 {
    int n, firstDigit, lastDigit, sum;
    cout << "Enter a number: ";
    cin >> n;

    firstDigit = n;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    lastDigit = n % 10;

    sum = firstDigit + lastDigit;
    cout << "Sum of first and last digit: " << sum << endl;

    return 0;
}

