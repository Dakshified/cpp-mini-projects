#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double totalBill;
    int people;

    cout << "===== BILL SPLITTER =====\n";

    cout << "Enter Total Bill Amount: Rs. ";
    cin >> totalBill;

    cout << "Enter Number of People: ";
    cin >> people;

    if(people <= 0) {
        cout << "Invalid Number of People!\n";
        return 0;
    }

    double amountPerPerson = totalBill / people;

    cout << fixed << setprecision(2);

    cout << "\n===== RESULT =====\n";
    cout << "Total Bill: Rs. " << totalBill << endl;
    cout << "People: " << people << endl;
    cout << "Each Person Pays: Rs. "
         << amountPerPerson << endl;

    return 0;
}