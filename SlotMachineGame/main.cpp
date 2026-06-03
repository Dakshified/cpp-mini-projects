#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    string symbols[] = {"🍒", "🍋", "⭐", "7"};

    cout << "===== SLOT MACHINE =====\n";
    cout << "Spinning...\n\n";

    string s1 = symbols[rand() % 4];
    string s2 = symbols[rand() % 4];
    string s3 = symbols[rand() % 4];

    cout << s1 << "  " << s2 << "  " << s3 << "\n\n";

    if(s1 == s2 && s2 == s3) {
        cout << "🎉 JACKPOT! You Win!\n";
    }
    else if(s1 == s2 || s2 == s3 || s1 == s3) {
        cout << "✨ Nice! Two Symbols Match!\n";
    }
    else {
        cout << "😢 Better Luck Next Time!\n";
    }

    return 0;
}