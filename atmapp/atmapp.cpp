
#include <iostream>
using namespace std;

void showMenu() {
    cout << "***MENU****" <<endl;
    cout << "1.Check balance" << endl;
    cout << "2.Deposit" << endl;
    cout << "3.Withdraw" << endl;
    cout << "4.Exit" << endl;
    cout << "----"<< endl;



}



int main()
{
    //checking the blance 
    //deposit money 
    //withdraw money
    //menu
    
        int select;
        double balance = 500;
        do {
        showMenu();
        cout << "Select: ";
        cin >> select;
        system("cls");

        switch (select) {
        case 1:cout << "Balance is: " << balance << "$" << endl; break;
        case 2:cout << "Deposit amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:cout << "Withdraw amount: ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough money" << endl;
            break;




        }


    } while (select!= 4);

    system("pause>0");
}
