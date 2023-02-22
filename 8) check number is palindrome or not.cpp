#include <iostream>
using namespace std;

int main() {
  int num, rev = 0,OriginalNum;


  cout << "Enter a positive integer: ";
  cin >> num;
  OriginalNum=num;


  while (num != 0) {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num /= 10;
  }
    cout << "The reverse of the number is " << rev << endl;
if (OriginalNum==rev)
{



cout<<OriginalNum<<"is a palindrome number";
}
else
{

cout<<OriginalNum<<"is not  a palindrome number";
}
  return 0;
}

