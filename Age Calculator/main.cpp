#include <iostream>

using namespace std;

int main() {

    int birthYear;
    int currentYear = 2026;

    cout << "Enter Birth Year: ";
    cin >> birthYear;

    cout << "Your Age is: "
         << currentYear - birthYear
         << " years\n";

    return 0;
}