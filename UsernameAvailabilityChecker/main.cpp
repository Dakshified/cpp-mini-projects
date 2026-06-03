#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> usernames = {
        "admin",
        "daksh",
        "john",
        "coder123",
        "testuser"
    };

    string username;
    bool found = false;

    cout << "===== USERNAME AVAILABILITY CHECKER =====\n\n";

    cout << "Enter Username: ";
    cin >> username;

    for(string user : usernames) {

        if(user == username) {
            found = true;
            break;
        }
    }

    cout << "\n===== RESULT =====\n";

    if(found)
        cout << "Username Already Taken ❌\n";
    else
        cout << "Username Available ✅\n";

    return 0;
}