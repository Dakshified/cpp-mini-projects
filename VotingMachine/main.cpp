#include <iostream>

using namespace std;

int main() {

    int votesA = 0;
    int votesB = 0;
    int votesC = 0;

    int choice;

    do {

        cout << "\n===== VOTING MACHINE =====\n";
        cout << "1. Candidate A\n";
        cout << "2. Candidate B\n";
        cout << "3. Candidate C\n";
        cout << "4. Show Results\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                votesA++;
                cout << "Vote Recorded for Candidate A\n";
                break;

            case 2:
                votesB++;
                cout << "Vote Recorded for Candidate B\n";
                break;

            case 3:
                votesC++;
                cout << "Vote Recorded for Candidate C\n";
                break;

            case 4:
                cout << "\n===== RESULTS =====\n";
                cout << "Candidate A: " << votesA << " votes\n";
                cout << "Candidate B: " << votesB << " votes\n";
                cout << "Candidate C: " << votesC << " votes\n";

                if(votesA > votesB && votesA > votesC)
                    cout << "Winner: Candidate A\n";
                else if(votesB > votesA && votesB > votesC)
                    cout << "Winner: Candidate B\n";
                else if(votesC > votesA && votesC > votesB)
                    cout << "Winner: Candidate C\n";
                else
                    cout << "Tie!\n";

                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}