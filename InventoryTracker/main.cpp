#include <iostream>
#include <vector>

using namespace std;

struct Product {
    string name;
    int quantity;
};

int main() {

    vector<Product> inventory;
    int choice;

    do {

        cout << "\n===== INVENTORY TRACKER =====\n";
        cout << "1. Add Product\n";
        cout << "2. View Inventory\n";
        cout << "3. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {
                Product p;

                cout << "Enter Product Name: ";
                cin >> p.name;

                cout << "Enter Quantity: ";
                cin >> p.quantity;

                inventory.push_back(p);

                cout << "Product Added!\n";
                break;
            }

            case 2: {

                if(inventory.empty()) {
                    cout << "Inventory Empty!\n";
                }
                else {

                    cout << "\nProducts:\n";

                    for(int i = 0; i < inventory.size(); i++) {
                        cout << i + 1 << ". "
                             << inventory[i].name
                             << " - Qty: "
                             << inventory[i].quantity
                             << endl;
                    }
                }

                break;
            }

            case 3:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}