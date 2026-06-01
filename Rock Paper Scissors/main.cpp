#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int userChoice;
    int computerChoice = rand() % 3 + 1;

    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";

    cout << "\nEnter Choice: ";
    cin >> userChoice;

    cout << "\nComputer Chose: ";

    if(computerChoice == 1)
        cout << "Rock\n";
    else if(computerChoice == 2)
        cout << "Paper\n";
    else
        cout << "Scissors\n";

    if(userChoice == computerChoice)
        cout << "Draw!\n";

    else if(
        (userChoice == 1 && computerChoice == 3) ||
        (userChoice == 2 && computerChoice == 1) ||
        (userChoice == 3 && computerChoice == 2)
    )
        cout << "You Win!\n";

    else
        cout << "Computer Wins!\n";

    return 0;
}