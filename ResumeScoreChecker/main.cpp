#include <iostream>

using namespace std;

int main() {

    int projects, skills, internships, certifications;
    int score = 0;

    cout << "===== RESUME SCORE CHECKER =====\n\n";

    cout << "Number of Projects: ";
    cin >> projects;

    cout << "Number of Skills: ";
    cin >> skills;

    cout << "Number of Internships: ";
    cin >> internships;

    cout << "Number of Certifications: ";
    cin >> certifications;

    score += projects * 5;
    score += skills * 3;
    score += internships * 10;
    score += certifications * 4;

    if(score > 100)
        score = 100;

    cout << "\n===== RESULT =====\n";
    cout << "Resume Score: "
         << score
         << "/100\n";

    if(score >= 80)
        cout << "Excellent Resume 🚀\n";
    else if(score >= 60)
        cout << "Good Resume 👍\n";
    else if(score >= 40)
        cout << "Average Resume 📄\n";
    else
        cout << "Needs Improvement 📚\n";

    return 0;
}