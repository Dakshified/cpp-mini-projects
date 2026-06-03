#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int subjects;
    double totalGradePoints = 0;

    cout << "===== GPA CALCULATOR =====\n";

    cout << "Enter Number of Subjects: ";
    cin >> subjects;

    for(int i = 1; i <= subjects; i++) {

        double gradePoint;

        cout << "Enter Grade Point for Subject "
             << i << " (0-10): ";

        cin >> gradePoint;

        totalGradePoints += gradePoint;
    }

    double gpa = totalGradePoints / subjects;

    cout << fixed << setprecision(2);

    cout << "\nYour GPA is: "
         << gpa
         << endl;

    if(gpa >= 9)
        cout << "Excellent Performance! 🌟\n";
    else if(gpa >= 8)
        cout << "Very Good! 👍\n";
    else if(gpa >= 7)
        cout << "Good Work!\n";
    else if(gpa >= 6)
        cout << "Keep Improving!\n";
    else
        cout << "Need More Practice!\n";

    return 0;
}