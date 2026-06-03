#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int luckyNumber = rand() % 100 + 1;

    cout << "===== LUCKY NUMBER GENERATOR =====\n\n";

    cout << "Your Lucky Number Today is: "
         << luckyNumber
         << endl;

    if(luckyNumber >= 90)
        cout << "Amazing Luck! 🌟\n";
    else if(luckyNumber >= 70)
        cout << "Great Day Ahead! 😎\n";
    else if(luckyNumber >= 40)
        cout << "Good Luck! 👍\n";
    else
        cout << "Stay Positive! 😊\n";

    return 0;
}