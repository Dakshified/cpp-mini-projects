#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> playlist;
    int choice;

    do {

        cout << "\n===== MUSIC PLAYLIST MANAGER =====\n";
        cout << "1. Add Song\n";
        cout << "2. View Playlist\n";
        cout << "3. Remove Song\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice) {

            case 1: {
                string song;

                cout << "Enter Song Name: ";
                getline(cin, song);

                playlist.push_back(song);

                cout << "Song Added!\n";
                break;
            }

            case 2: {

                if(playlist.empty()) {
                    cout << "Playlist is Empty!\n";
                }
                else {

                    cout << "\n===== PLAYLIST =====\n";

                    for(int i = 0; i < playlist.size(); i++) {
                        cout << i + 1 << ". "
                             << playlist[i]
                             << endl;
                    }
                }

                break;
            }

            case 3: {

                if(playlist.empty()) {
                    cout << "Playlist is Empty!\n";
                    break;
                }

                int songNumber;

                cout << "Enter Song Number to Remove: ";
                cin >> songNumber;

                if(songNumber >= 1 &&
                   songNumber <= playlist.size()) {

                    playlist.erase(
                        playlist.begin() + songNumber - 1
                    );

                    cout << "Song Removed!\n";
                }
                else {
                    cout << "Invalid Song Number!\n";
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