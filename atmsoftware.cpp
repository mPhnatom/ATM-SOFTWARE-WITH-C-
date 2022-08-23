#include <iostream>

using namespace std;

void menu() {
    cout << "**********MENU**********" << endl;
    cout << "[1] Check Balance" << endl;
    cout << "[2] Deposit" << endl;
    cout << "[3] Withdraw" << endl;
    cout << "[4] Exit" << endl;
    cout << "********************" << endl;

}

int main()
{
    //First Step
    int option;

    double balance = 1000;
    do {
        menu();
        cout << "Option: ";
        cin >> option;
        system("cls");
        switch (option) {
        case 1: cout << "Your balance: " << balance << "$" << endl; break;
        case 2: cout << "Deposit: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: cout << "Withdraw: ";
            double WithdrawAmount;
            cin >> WithdrawAmount;
            if (WithdrawAmount < balance)
                balance -= WithdrawAmount;
            else
                cout << "Not enough money" << endl;
            break;
        }
    } while (option !=4);
    system("pause>0");
}