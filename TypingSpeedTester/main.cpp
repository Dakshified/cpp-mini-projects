#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {

    string sentence =
        "The quick brown fox jumps over the lazy dog";

    string userInput;

    cout << "===== Typing Speed Tester =====\n\n";
    cout << "Type the following sentence:\n\n";
    cout << sentence << "\n\n";

    cout << "Press Enter when ready...";
    cin.get();

    auto start = high_resolution_clock::now();

    getline(cin, userInput);

    auto end = high_resolution_clock::now();

    duration<double> timeTaken = end - start;

    int wordCount = 9; // words in sentence

    double minutes = timeTaken.count() / 60.0;

    double wpm = wordCount / minutes;

    cout << "\n===== Results =====\n";
    cout << "Time Taken: " << timeTaken.count() << " seconds\n";
    cout << "Typing Speed: " << (int)wpm << " WPM\n";

    if(userInput == sentence)
        cout << "Accuracy: 100%\n";
    else
        cout << "Accuracy: Needs Improvement\n";

    return 0;
}