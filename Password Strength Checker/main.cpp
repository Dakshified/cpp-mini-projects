#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string password;

    cout << "Enter Password: ";
    cin >> password;

    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;

    for(char ch : password) {

        if(isupper(ch))
            upper = true;
        else if(islower(ch))
            lower = true;
        else if(isdigit(ch))
            digit = true;
        else
            special = true;
    }

    int score = upper + lower + digit + special;

    if(password.length() >= 8 && score == 4)
        cout << "Strong Password\n";
    else if(score >= 3)
        cout << "Medium Password\n";
    else
        cout << "Weak Password\n";

    return 0;
}