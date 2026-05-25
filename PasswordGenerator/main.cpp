#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    string characters =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*";

    int length;

    cout << "Enter password length: ";
    cin >> length;

    srand(time(0));

    string password = "";

    for(int i = 0; i < length; i++) {

        int randomIndex = rand() % characters.length();

        password += characters[randomIndex];
    }

    cout << "\nGenerated Password: " << password << endl;

    return 0;
}