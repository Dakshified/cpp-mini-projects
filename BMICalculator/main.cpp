#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double weight, height, bmi;

    cout << "===== BMI CALCULATOR =====\n\n";

    cout << "Enter Weight (kg): ";
    cin >> weight;

    cout << "Enter Height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << fixed << setprecision(2);

    cout << "\nYour BMI: " << bmi << endl;

    if(bmi < 18.5)
        cout << "Category: Underweight\n";
    else if(bmi < 25)
        cout << "Category: Normal Weight\n";
    else if(bmi < 30)
        cout << "Category: Overweight\n";
    else
        cout << "Category: Obese\n";

    return 0;
}