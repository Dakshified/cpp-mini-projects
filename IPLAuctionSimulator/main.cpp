#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    string player;
    double basePrice;

    string teams[] = {
        "CSK",
        "MI",
        "RCB",
        "KKR",
        "SRH",
        "DC",
        "GT",
        "PBKS",
        "LSG",
        "RR"

    };

    cout << "===== IPL AUCTION SIMULATOR =====\n\n";

    cout << "Enter Player Name: ";
    getline(cin, player);

    cout << "Enter Base Price (Cr): ";
    cin >> basePrice;

    int randomTeam = rand() % 8;

    double soldPrice =
        basePrice + (rand() % 20 + 1);

    cout << "\n===== AUCTION RESULT =====\n";

    cout << "Player: " << player << endl;
    cout << "Team: " << teams[randomTeam] << endl;
    cout << "Sold For: "
         << soldPrice
         << " Cr" << endl;

    return 0;
}