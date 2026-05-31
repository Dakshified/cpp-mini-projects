#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    int key;

    cout << "===== Text Encryption Tool =====\n";

    cin.ignore();

    cout << "Enter Text: ";
    getline(cin, text);

    cout << "Enter Encryption Key: ";
    cin >> key;

    for(int i = 0; i < text.length(); i++) {

        if(isalpha(text[i])) {

            char base = islower(text[i]) ? 'a' : 'A';

            text[i] = (text[i] - base + key) % 26 + base;
        }
    }

    cout << "\nEncrypted Text: " << text << endl;

    return 0;
}