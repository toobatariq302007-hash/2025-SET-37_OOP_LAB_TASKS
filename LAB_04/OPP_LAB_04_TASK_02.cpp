#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(string accNum, string accHolder, double bal) {
        accountNumber = accNum;
        accountHolder = accHolder;
        balance = bal;
    }

    void showAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string accNum, accHolder;
    double balance;

    cout << "Enter Account Number: ";
    cin >> accNum;

    cin.ignore(); 

    cout << "Enter Account Holder Name: ";
    getline(cin, accHolder);

    cout << "Enter Balance: ";
    cin >> balance;

    BankAccount acc(accNum, accHolder, balance);
    acc.showAccountDetails();

    return 0;
}
