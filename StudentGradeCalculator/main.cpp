#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Enter number of subjects: ";
    cin >> n;

    int marks[n];
    int total = 0;

    for(int i = 0; i < n; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    double average = (double)total / n;

    cout << "\nTotal Marks: " << total << endl;
    cout << "Average: " << average << endl;

    if(average >= 90)
        cout << "Grade: A" << endl;
    else if(average >= 75)
        cout << "Grade: B" << endl;
    else if(average >= 60)
        cout << "Grade: C" << endl;
    else if(average >= 40)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}