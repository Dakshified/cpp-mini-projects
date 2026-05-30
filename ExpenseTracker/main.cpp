#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int choice;
    double amount, total = 0;

    do {
        cout << "\n===== Expense Tracker =====\n";
        cout << "1. Add Expense\n";
        cout << "2. View Total Expenses\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
            {
                cout << "Enter Expense Amount: ";
                cin >> amount;

                ofstream file("expenses.txt", ios::app);
                file << amount << endl;
                file.close();

                cout << "Expense Added Successfully!\n";
                break;
            }

            case 2:
            {
                ifstream file("expenses.txt");

                total = 0;

                while(file >> amount) {
                    total += amount;
                }

                file.close();

                cout << "Total Expenses: Rs. " << total << endl;
                break;
            }

            case 3:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}