#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string product;
    int quantity;
    double price;

    cout << "===== INVOICE GENERATOR =====\n\n";

    cout << "Enter Product Name: ";
    cin.ignore();
    getline(cin, product);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price Per Unit: ";
    cin >> price;

    double total = quantity * price;

    cout << fixed << setprecision(2);

    cout << "\n=========================\n";
    cout << "        INVOICE\n";
    cout << "=========================\n";
    cout << "Product : " << product << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price   : Rs. " << price << endl;
    cout << "-------------------------\n";
    cout << "Total   : Rs. " << total << endl;
    cout << "=========================\n";

    return 0;
}