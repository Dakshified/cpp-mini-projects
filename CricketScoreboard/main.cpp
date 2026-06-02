#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int runs = 0;
    int wickets = 0;
    int balls = 0;

    int choice;

    do {
        cout << "\n===== CRICKET SCOREBOARD =====\n";
        cout << "1. Add Runs\n";
        cout << "2. Add Wicket\n";
        cout << "3. Show Score\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {
                int run;

                cout << "Enter Runs Scored (0-6): ";
                cin >> run;

                runs += run;
                balls++;

                break;
            }

            case 2:
                wickets++;
                balls++;
                cout << "Wicket Fallen!\n";
                break;

            case 3: {
                double overs = balls / 6.0;

                cout << "\n===== SCORE =====\n";
                cout << runs << "/" << wickets << endl;
                cout << fixed << setprecision(1);
                cout << "Overs: " << overs << endl;

                if(overs > 0)
                    cout << "Run Rate: "
                         << runs / overs
                         << endl;

                break;
            }

            case 4:
                cout << "Match Ended!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}