#include <iostream>
#include <vector>

using namespace std;

struct Book {
    int id;
    string title;
    bool issued;
};

int main() {
    vector<Book> books;
    int choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {
                Book b;

                cout << "Enter Book ID: ";
                cin >> b.id;

                cin.ignore();
                cout << "Enter Book Title: ";
                getline(cin, b.title);

                b.issued = false;

                books.push_back(b);

                cout << "Book Added Successfully!\n";
                break;
            }

            case 2: {
                cout << "\n--- Book List ---\n";

                for(auto book : books) {
                    cout << "ID: " << book.id
                         << " | Title: " << book.title
                         << " | Status: "
                         << (book.issued ? "Issued" : "Available")
                         << endl;
                }

                break;
            }

            case 3: {
                int id;
                cout << "Enter Book ID to Issue: ";
                cin >> id;

                bool found = false;

                for(auto &book : books) {
                    if(book.id == id && !book.issued) {
                        book.issued = true;
                        cout << "Book Issued Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Available!\n";

                break;
            }

            case 4: {
                int id;
                cout << "Enter Book ID to Return: ";
                cin >> id;

                bool found = false;

                for(auto &book : books) {
                    if(book.id == id && book.issued) {
                        book.issued = false;
                        cout << "Book Returned Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}