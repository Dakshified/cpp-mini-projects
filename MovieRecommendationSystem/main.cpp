#include <iostream>

using namespace std;

int main() {

    int choice;

    cout << "===== MOVIE RECOMMENDATION SYSTEM =====\n\n";

    cout << "Select Genre:\n";
    cout << "1. Action\n";
    cout << "2. Comedy\n";
    cout << "3. Sci-Fi\n";
    cout << "4. Horror\n";

    cout << "\nEnter Choice: ";
    cin >> choice;

    cout << "\nRecommended Movies:\n";

    switch(choice) {

        case 1:
            cout << "- John Wick\n";
            cout << "- Mad Max: Fury Road\n";
            cout << "- Mission Impossible\n";
            break;

        case 2:
            cout << "- The Mask\n";
            cout << "- Home Alone\n";
            cout << "- Mr. Bean's Holiday\n";
            break;

        case 3:
            cout << "- Interstellar\n";
            cout << "- Inception\n";
            cout << "- The Martian\n";
            break;

        case 4:
            cout << "- The Conjuring\n";
            cout << "- Insidious\n";
            cout << "- Annabelle\n";
            break;

        default:
            cout << "Invalid Choice!\n";
    }

    return 0;
}