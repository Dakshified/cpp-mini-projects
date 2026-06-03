#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> watchlist;
    int choice;

    do {

        cout << "\n===== NETFLIX WATCHLIST MANAGER =====\n";
        cout << "1. Add Movie\n";
        cout << "2. View Watchlist\n";
        cout << "3. Mark Movie as Watched\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice) {

            case 1: {
                string movie;

                cout << "Enter Movie Name: ";
                getline(cin, movie);

                watchlist.push_back(movie);

                cout << "Movie Added!\n";
                break;
            }

            case 2: {

                if(watchlist.empty()) {
                    cout << "Watchlist is Empty!\n";
                }
                else {

                    cout << "\n===== YOUR WATCHLIST =====\n";

                    for(int i = 0; i < watchlist.size(); i++) {
                        cout << i + 1 << ". "
                             << watchlist[i]
                             << endl;
                    }
                }

                break;
            }

            case 3: {

                if(watchlist.empty()) {
                    cout << "Watchlist is Empty!\n";
                    break;
                }

                int movieNumber;

                cout << "Enter Movie Number to Remove: ";
                cin >> movieNumber;

                if(movieNumber >= 1 &&
                   movieNumber <= watchlist.size()) {

                    watchlist.erase(
                        watchlist.begin() + movieNumber - 1
                    );

                    cout << "Movie Marked as Watched!\n";
                }
                else {
                    cout << "Invalid Movie Number!\n";
                }

                break;
            }

            case 4:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}