#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    string technology[] = {
        "AI",
        "Blockchain",
        "Cloud",
        "IoT",
        "Machine Learning",
        "Cybersecurity"
    };

    string industry[] = {
        "Healthcare",
        "Education",
        "Fitness",
        "Finance",
        "Agriculture",
        "Transportation"
    };

    int tech = rand() % 6;
    int ind = rand() % 6;

    cout << "===== BUSINESS IDEA GENERATOR =====\n\n";

    cout << "Generated Startup Idea:\n\n";

    cout << technology[tech]
         << "-Powered "
         << industry[ind]
         << " Platform"
         << endl;

    return 0;
}