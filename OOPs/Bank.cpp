#include <iostream>
using namespace std;

class Bank
{
public:
    string name;
    int account_id;
    int amount_in_bank;

    Bank()
    {
        amount_in_bank = 0;
        cout << "\nEnter your name: ";
        cin >> name;
        cout << "Enter account_id: ";
        cin >> account_id;
    }

    void deposit()
    {
        int amount;
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        cout << endl;
        cout << "Depositing " << amount << endl;
        amount_in_bank += amount;
        cout << "You have " << amount_in_bank << " in back" << endl;
    }

    void withdraw()
    {
        int amount;
        cout << "Enter the amount to Withdraw: ";
        cin >> amount;
        cout << endl;
        if (amount > amount_in_bank)
        {
            cout << "Not enough money..";
            return;
        }
        cout << "Withdrawing: " << amount << endl;
        amount_in_bank -= amount;
        cout << "You have " << amount_in_bank << " remaining in back" << endl;
    }

    void get_details()
    {
        cout << "Getting details..." << endl;
        cout << "Your name: " << name << endl;
        cout << "Your account id: " << account_id << endl;
        cout << "Your current balance: " << amount_in_bank << endl;
    }
};

int main()
{

    Bank *myBank = new Bank();
    myBank->deposit();
    myBank->withdraw();

    return 0;
}