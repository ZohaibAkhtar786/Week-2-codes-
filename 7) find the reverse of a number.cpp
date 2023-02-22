#include <iostream>
using namespace std;

int main() {
  int num, rev = 0;

  cout << "Enter a positive integer: ";
  cin >> num;

  while (num != 0) {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num /= 10;
  }

  cout << "The reverse of the number is " << rev << endl;

  return 0;
}

