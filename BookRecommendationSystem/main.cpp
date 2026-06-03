#include <iostream>

using namespace std;

int main() {

    int choice;

    cout << "===== BOOK RECOMMENDATION SYSTEM =====\n\n";

    cout << "Choose a Genre:\n";
    cout << "1. Fiction\n";
    cout << "2. Science\n";
    cout << "3. Self-Help\n";
    cout << "4. Programming\n";

    cout << "\nEnter Choice: ";
    cin >> choice;

    cout << "\nRecommended Books:\n";

    switch(choice) {

        case 1:
            cout << "- Harry Potter\n";
            cout << "- The Hobbit\n";
            cout << "- The Alchemist\n";
            break;

        case 2:
            cout << "- A Brief History of Time\n";
            cout << "- Cosmos\n";
            cout << "- The Selfish Gene\n";
            break;

        case 3:
            cout << "- Atomic Habits\n";
            cout << "- Deep Work\n";
            cout << "- Think and Grow Rich\n";
            break;

        case 4:
            cout << "- Clean Code\n";
            cout << "- C++ Primer\n";
            cout << "- Introduction to Algorithms\n";
            break;

        default:
            cout << "Invalid Choice!\n";
    }

    return 0;
}