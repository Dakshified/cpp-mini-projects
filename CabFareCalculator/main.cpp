#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double distance;
    double fare;

    cout << "===== CAB FARE CALCULATOR =====\n\n";

    cout << "Enter Distance (km): ";
    cin >> distance;

    fare = 50 + (distance * 12);

    cout << fixed << setprecision(2);

    cout << "\nBase Fare: Rs. 50\n";
    cout << "Distance Charge: Rs. " << distance * 12 << endl;
    cout << "Total Fare: Rs. " << fare << endl;

    return 0;
}