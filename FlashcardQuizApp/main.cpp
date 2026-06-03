#include <iostream>
#include <string>

using namespace std;

int main() {

    string answer;
    int score = 0;

    cout << "===== FLASHCARD QUIZ APP =====\n\n";

    cout << "Question 1: What is the capital of India?\n";
    cout << "Your Answer: ";
    getline(cin, answer);

    if(answer == "Delhi" || answer == "New Delhi")
        score++;

    cout << "\nQuestion 2: Which planet is known as the Red Planet?\n";
    cout << "Your Answer: ";
    getline(cin, answer);

    if(answer == "Mars")
        score++;

    cout << "\nQuestion 3: How many continents are there?\n";
    cout << "Your Answer: ";
    getline(cin, answer);

    if(answer == "7")
        score++;

    cout << "\n===== RESULT =====\n";
    cout << "Score: " << score << "/3\n";

    if(score == 3)
        cout << "Excellent!\n";
    else if(score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Learning!\n";

    return 0;
}