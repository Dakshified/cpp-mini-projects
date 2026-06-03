#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    string prefix[] = {
        "AI",
        "Tech",
        "Smart",
        "Cloud",
        "Data",
        "Fin",
        "Cyber"
    };

    string suffix[] = {
        "Flow",
        "Hub",
        "Tech",
        "Labs",
        "X",
        "Works",
        "Bot"
    };

    int p = rand() % 7;
    int s = rand() % 7;

    cout << "===== STARTUP NAME GENERATOR =====\n\n";

    cout << "Generated Startup Name:\n";

    cout << prefix[p] + suffix[s] << endl;

    return 0;
}