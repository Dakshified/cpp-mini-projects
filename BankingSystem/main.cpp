#include <iostream>
#include <vector>

using namespace std;

struct Account {
    int accountNumber;
    string name;
    double balance;
};

int main() {

    vector<Account> accounts;
    int choice;

    do {

        cout << "\n===== BANKING SYSTEM =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {

                Account acc;

                cout << "Enter Account Number: ";
                cin >> acc.accountNumber;

                cout << "Enter Name: ";
                cin >> acc.name;

                acc.balance = 0;

                accounts.push_back(acc);

                cout << "Account Created Successfully!\n";

                break;
            }

            case 2: {

                int accNo;
                double amount;

                cout << "Enter Account Number: ";
                cin >> accNo;

                cout << "Enter Amount: ";
                cin >> amount;

                bool found = false;

                for(auto &acc : accounts) {

                    if(acc.accountNumber == accNo) {

                        acc.balance += amount;

                        cout << "Deposit Successful!\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 3: {

                int accNo;
                double amount;

                cout << "Enter Account Number: ";
                cin >> accNo;

                cout << "Enter Amount: ";
                cin >> amount;

                bool found = false;

                for(auto &acc : accounts) {

                    if(acc.accountNumber == accNo) {

                        if(acc.balance >= amount) {

                            acc.balance -= amount;

                            cout << "Withdrawal Successful!\n";
                        }
                        else {

                            cout << "Insufficient Balance!\n";
                        }

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 4: {

                int accNo;

                cout << "Enter Account Number: ";
                cin >> accNo;

                bool found = false;

                for(auto acc : accounts) {

                    if(acc.accountNumber == accNo) {

                        cout << "Balance: Rs."
                             << acc.balance
                             << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 5:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}