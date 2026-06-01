#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    char choice;

    do {
        int dice = rand() % 6 + 1;

        cout << "You rolled: " << dice << endl;

        cout << "Roll Again? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    return 0;
}