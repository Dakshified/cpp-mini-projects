#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "===== Number Guessing Game =====\n";
    cout << "I have selected a number between 1 and 100.\n";

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber) {
            cout << "Too High!\n";
        }
        else if (guess < secretNumber) {
            cout << "Too Low!\n";
        }
        else {
            cout << "\n🎉 Correct! You guessed it in "
                 << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}