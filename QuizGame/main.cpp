#include <iostream>

using namespace std;

int main() {

    int score = 0;
    char answer;

    cout << "===== C++ Quiz Game =====\n\n";

    // Question 1
    cout << "1. Which language is used for web apps?\n";
    cout << "a) Python\nb) JavaScript\nc) C++\nd) Java\n";
    cout << "Enter answer: ";
    cin >> answer;

    if(answer == 'b' || answer == 'B') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong!\n\n";
    }

    // Question 2
    cout << "2. Who is known as the father of C++?\n";
    cout << "a) Dennis Ritchie\nb) Bjarne Stroustrup\nc) James Gosling\nd) Elon Musk\n";
    cout << "Enter answer: ";
    cin >> answer;

    if(answer == 'b' || answer == 'B') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong!\n\n";
    }

    // Question 3
    cout << "3. Which symbol is used for comments in C++?\n";
    cout << "a) //\nb) ##\nc) <!-- -->\nd) **\n";
    cout << "Enter answer: ";
    cin >> answer;

    if(answer == 'a' || answer == 'A') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong!\n\n";
    }

    cout << "===== Quiz Finished =====\n";
    cout << "Your Score: " << score << "/3\n";

    return 0;
}