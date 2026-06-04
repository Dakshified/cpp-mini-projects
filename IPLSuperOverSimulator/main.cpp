#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    string team1, team2;

    cout << "===== IPL SUPER OVER SIMULATOR =====\n\n";

    cout << "Enter Team 1: ";
    getline(cin, team1);

    cout << "Enter Team 2: ";
    getline(cin, team2);

    int score1 = rand() % 21; // 0-20 runs
    int score2 = rand() % 21;

    cout << "\n===== SUPER OVER RESULT =====\n\n";

    cout << team1 << ": "
         << score1
         << " Runs\n";

    cout << team2 << ": "
         << score2
         << " Runs\n\n";

    if(score1 > score2) {

        cout << "🏆 Winner: "
             << team1
             << endl;
    }
    else if(score2 > score1) {

        cout << "🏆 Winner: "
             << team2
             << endl;
    }
    else {

        cout << "🤝 Match Tied Again!\n";
    }

    return 0;
}