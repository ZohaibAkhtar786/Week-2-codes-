#include <iostream>
using namespace std;

int main() {
    int days,weeks,years,RemainingDays; 
    cout << "Enter the number of days: ";
    cin >> days;

     years = days / 365;
     weeks = (days % 365) / 7;
    RemainingDays = (days % 365) % 7;


    cout << days << " days = " << years << " years " << weeks << " weeks and " << RemainingDays << " days." << endl;

    return 0;
}

