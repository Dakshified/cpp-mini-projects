#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    string titles[] = {
        "Shadow",
        "Fire",
        "Ice",
        "Thunder",
        "Dark",
        "Iron"
    };

    string classes[] = {
        "Knight",
        "Wizard",
        "Assassin",
        "Hunter",
        "Warrior",
        "Mage"
    };

    int title = rand() % 6;
    int role = rand() % 6;

    int health = rand() % 51 + 50;
    int attack = rand() % 51 + 50;
    int defense = rand() % 51 + 50;
    int magic = rand() % 51 + 50;

    cout << "===== GAME CHARACTER GENERATOR =====\n\n";

    cout << "Character: "
         << titles[title]
         << " "
         << classes[role]
         << "\n\n";

    cout << "Health  : " << health << endl;
    cout << "Attack  : " << attack << endl;
    cout << "Defense : " << defense << endl;
    cout << "Magic   : " << magic << endl;

    return 0;
}